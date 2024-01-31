//
// Created by zyn66 on 1/31/2024.
//

#ifndef C___CIPHER_ENCODER_PROJECT_CAESAR_CIPHER_H
#define C___CIPHER_ENCODER_PROJECT_CAESAR_CIPHER_H

#include <string>

class Caesar_Cipher {
public:

    // Function to encrypt a given plaintext with a specified key
    static std::string encrypt(const std::string& plaintext, int key);

    // Function to decrypt a given ciphertext with the original key
    static std::string decrypt(const std::string& ciphertext, int key);
};

#endif //C___CIPHER_ENCODER_PROJECT_CAESAR_CIPHER_H