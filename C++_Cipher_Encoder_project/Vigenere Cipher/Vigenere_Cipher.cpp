//
// Created by zyn66 on 1/31/2024.
//

#include "Vigenere_Cipher.h"
Vigenere::Vigenere(const std::string& key) : key(key) {
    processKey();
}

// Private utility function to process the key
void Vigenere::processKey() {
    for (char& c : key) {
        if (c >= 'a' && c <= 'z') {
            c += 'A' - 'a';
        } else if (c < 'A' || c > 'Z') {
            // Skip non-alphabetic characters
            continue;
        }
    }
}

// Function to encrypt the text using Vigenere cipher
std::string Vigenere::encrypt(const std::string& text) const {
    std::string result;

    for (size_t i = 0, j = 0; i < text.length(); ++i) {
        char c = text[i];

        if (c >= 'a' && c <= 'z') {
            c += 'A' - 'a';
        } else if (c < 'A' || c > 'Z') {
            // Skip non-alphabetic characters
            continue;
        }

        result += (c + key[j] - 2 * 'A') % 26 + 'A';
        j = (j + 1) % key.length();
    }

    return result;
}

// Function to decrypt the text using Vigenere cipher
std::string Vigenere::decrypt(const std::string& text) const {
    std::string result;

    for (size_t i = 0, j = 0; i < text.length(); ++i) {
        char c = text[i];

        if (c >= 'a' && c <= 'z') {
            c += 'A' - 'a';
        } else if (c < 'A' || c > 'Z') {
            // Skip non-alphabetic characters
            continue;
        }

        result += (c - key[j] + 26) % 26 + 'A';
        j = (j + 1) % key.length();
    }

    return result;
}