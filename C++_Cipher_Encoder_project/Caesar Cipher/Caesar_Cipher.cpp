//
// Created by zyn66 on 1/31/2024.
//

#include "Caesar_Cipher.h"
#include <iostream>


// Function to encrypt a given plaintext with a specified key
std::string Caesar_Cipher::encrypt(const std::string& plaintext, int key) {
    std::string ciphertext = "";

    for (char ch : plaintext) {
        if (isalpha(ch)) {
            // Shift only alphabetical characters
            char shifted = isupper(ch) ? 'A' + (ch - 'A' + key) % 26 : 'a' + (ch - 'a' + key) % 26;
            ciphertext += shifted;
        } else {
            // Non-alphabetical characters remain unchanged
            ciphertext += ch;
        }
    }

    return ciphertext;
}

// Function to decrypt a given ciphertext with the original key
std::string Caesar_Cipher::decrypt(const std::string& ciphertext, int key) {
    // Decryption is the same as encryption with the negative key
    return encrypt(ciphertext, (26 - key) % 26);
}
