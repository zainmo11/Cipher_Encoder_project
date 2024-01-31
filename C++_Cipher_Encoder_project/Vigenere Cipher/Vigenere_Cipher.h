//
// Created by zyn66 on 1/31/2024.
//

#ifndef C___CIPHER_ENCODER_PROJECT_VIGENERE_CIPHER_H
#define C___CIPHER_ENCODER_PROJECT_VIGENERE_CIPHER_H



#include <string>

class Vigenere{
public:
    // Constructor to initialize the key
    Vigenere(const std::string& key);

    // Function to encrypt the text using Vigenere cipher
    std::string encrypt(const std::string& text) const;

    // Function to decrypt the text using Vigenere cipher
    std::string decrypt(const std::string& text) const;

private:
    std::string key; // Key for the Vigenere cipher

    // Private utility function to process the key
    void processKey();
};



#endif //C___CIPHER_ENCODER_PROJECT_VIGENERE_CIPHER_H
