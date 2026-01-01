# WebSocketClient
# WebSocketClient (C++)

## Overview
This project is a simple WebSocket client implemented in C++ as part of an internship assignment.  
The objective of the assignment was to demonstrate understanding of C++ project structure, 
third-party library integration, and basic WebSocket client logic.

The client is implemented using the **WebSocket++** library and follows a clean, modular structure 
suitable for extension and testing.

---

## Features
- WebSocket client implementation in C++
- Uses WebSocket++ (header-only library)
- Structured project layout
- Build configuration using CMake
- Clear separation of source and third-party dependencies

---

## Project Structure
WebSocketClient/
├── src/
│ └── main.cpp
├── third_party/
│ └── websocketpp/
├── CMakeLists.txt
└── README.md

---

## Build Notes
This project was developed and tested on Windows using MSVC.

WebSocket++ relies on **Boost** and **ASIO**, which require environment-specific configuration 
on Windows. Due to this, successful compilation depends on proper Boost installation and 
toolchain compatibility.

The focus of this assignment is on **code structure, logic, and integration**, 
rather than platform-specific build setup.

---

## How to Build (General)
```bash
mkdir build
cd build
cmake ..
cmake --build .
Note: On Windows, Boost must be correctly installed and configured for the build to succeed.
Note: On Windows, Boost must be correctly installed and configured for the build to succeed.

Assignment Context

This repository is submitted as part of an internship screening assignment.
It demonstrates:

C++ coding standards

Dependency management

Understanding of WebSocket client architecture

Author

Srushti Nikam
GitHub: https://github.com/srushtinikam


---

## 🔥 How to Add README to GitHub (Fast)

From **Developer Command Prompt** inside `D:\WebSocketClient`:

```bat
notepad README.md

