# Vigenere and Caesar Cipher Project

## Overview

This project implements the Vigenere Cipher and Caesar Cipher, classical methods of encrypting alphabetic text. The ciphers use different techniques to shift letters in the plaintext, creating more secure encryptions than a basic Caesar Cipher.

## Features

- Encryption of plaintext using the Vigenere Cipher
- Decryption of ciphertext using the Vigenere Cipher
- Encryption of plaintext using the Caesar Cipher
- Decryption of ciphertext using the Caesar Cipher
- Support for preserving the original case of the text

## Getting Started

### Prerequisites

- C++ compiler (supporting C++11 or later)
- Make sure to have a compatible development environment

### Build Instructions

1. Clone the repository:

    ```bash
    git clone [repository_url]
    cd cipher-project
    ```

2. Build the project:

    ```bash
    g++ main.cpp Vigenere.cpp Caesar.cpp -o cipher -std=c++11
    ```

### Usage

1. Run the executable:

    ```bash
    ./cipher
    ```

2. Follow the prompts to choose encryption or decryption, select the cipher method, enter the text, and provide the required details.

## Examples

### Vigenere Cipher

#### Encryption

```bash
Do you want to encrypt (E) or decrypt (D)? e
Choose encryption method (C for Caesar, V for Vigenere): v
Enter plaintext: Hello
Enter keyword: Secret
Encrypted text: Rfczk
```

## Caesar Cipher

### Encryption
```bash
Do you want to encrypt (E) or decrypt (D)? e
Choose encryption method (C for Caesar, V for Vigenere): c
Enter plaintext: Hello
Enter shift value for Caesar encryption: 3
Encrypted text: Khoor
```

### Decryption
```bash

Do you want to encrypt (E) or decrypt (D)? d
Choose decryption method (C for Caesar, V for Vigenere): c
Enter ciphertext: Khoor
Enter shift value for Caesar decryption: 3
Decrypted text: Hello
```
