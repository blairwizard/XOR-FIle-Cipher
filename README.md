# XOR Binary File Cipher
A high-performance, lightweight file encryption and decryption utility written in C, following K&R principles.

## 📌 Overview
This project implements a **Symmetrical Streaming Cipher** using the Bitwise XOR (`^`) operator. It is designed to be "binary-safe," meaning it can encrypt any file type (Images, PDFs, Executables, Text) without corrupting the underlying data structure.

## 🛠️ Features
- **Buffered I/O**: Uses a 1024-byte buffer to handle large files efficiently without high RAM usage.
- **Repeating Key Logic**: Implements a modular arithmetic approach to apply a variable-length secret key across the entire file stream.
- **Cross-Platform**: Compiled and tested using GCC/MinGW on Windows (Galaxy Book 5).

## 🚀 Getting Started

### Compilation
Use any standard C compiler (like GCC):
```bash
gcc hasher.c -o encrypt
gcc decrypt.c -o decrypt
```

## Usage
```bash
./encrypt <input.txt> <encryptedfile.txt> <hash key>
./decrypt <input.txt> <decryptedfile.txt> <hash key>
```


