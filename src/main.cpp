#include <iostream>
#include <random>  // Standard C++ random instead of boost
#include <websocketpp/config/asio_no_tls_client.hpp>
#include <websocketpp/client.hpp>

typedef websocketpp::client<websocketpp::config::asio_client> client;

int main() {
    client c;

    try {
        // Disable logs
        c.clear_access_channels(websocketpp::log::alevel::all);
        c.clear_error_channels(websocketpp::log::elevel::all);

        // Initialize ASIO
        c.init_asio();

        // Message handler
        c.set_message_handler([](websocketpp::connection_hdl, client::message_ptr msg) {
            std::cout << "Received: " << msg->get_payload() << std::endl;
        });

        websocketpp::lib::error_code ec;
        auto con = c.get_connection("ws://echo.websocket.events", ec);

        if (ec) {
            std::cout << "Connection error: " << ec.message() << std::endl;
            return 1;
        }

        c.connect(con);
        c.run();
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
