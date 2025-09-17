# C-Programming Tutorial

A collection of **code-wise notes and practice programs** I created while learning the C language.  
It’s organized for quick revision, with small, focused examples that build up from basics to real projects.

---

## 📌 About

Hi, I’m **Debananda Kunar**.  
I started learning **C** and built this repository to document my progress and share structured notes that are easy to revisit.

**Goals:**
- Track my learning journey  
- Share concise notes with runnable examples  
- Make it beginner-friendly for quick revision  

If this helps you, feel free to use it, improve it, or contribute.  

📧 Contact: **debanandakuanr453@gmail.com**

---

## 📖 What’s Inside

This repo covers the following C topics (more will be added as I learn):

- Basics: syntax, variables, data types, operators  
- Control flow: `if/else`, `switch`, loops (`for`, `while`, `do...while`)  
- Functions & scope  
- Arrays & strings  
- Pointers (single, double), pointer arithmetic  
- Structures, unions & enums  
- Dynamic memory: `malloc`, `calloc`, `realloc`, `free`  
- File I/O: text & binary files (`fopen`, `fscanf`, `fprintf`, `fread`, `fwrite`)  
- Preprocessor: macros, `#define`, `#include`, conditional compilation  
- Modular C: headers (`.h`), multi-file programs, simple makefiles  
- Debugging & testing: `gdb`, assertions, error handling patterns  
- Practice notes & small code snippets  
- Mini projects (CLI tools, algorithms, etc.)

---

## 🛠 Prerequisites

To run the examples:

- A **C compiler** (GCC or Clang)  
- A **code editor** (VS Code recommended)  
- A **terminal** (Command Prompt/PowerShell, macOS Terminal, or any Linux shell)  

**Optional (but helpful):**
- `make` for building multi-file programs  
- `gdb` for debugging  

---

## 🚀 Getting Started

### 1) Install a compiler

- **Windows**:  
  - Install **MSYS2** → `pacman -S mingw-w64-ucrt-x86_64-gcc`  
  - Or install **TDM-GCC** / **WinLibs GCC**  
- **macOS**:  
  - Install Xcode Command Line Tools → `xcode-select --install` (includes `clang`)  
- **Linux**:  
  - Debian/Ubuntu → `sudo apt install build-essential`  
  - Fedora → `sudo dnf groupinstall "Development Tools"`  

---

## 🧪 Quick Smoke Test

Create a file named **`hello.c`**:

```c
#include <stdio.h>

// Entry point of the program
int main(void) {
    printf("Hello, C!\n");
    return 0;  // Exit code 0 means success
}

```
---
# compile
gcc hello.c -o hello

# run on Linux / macOS
./hello

# run on Windows (CMD or PowerShell)
hello.exe