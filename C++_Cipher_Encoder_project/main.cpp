#include <iostream>
#include "Caesar Cipher/Caesar_Cipher.h"
#include "Vigenere Cipher/Vigenere_Cipher.h"

int main() {
    char choice;

    do {
        std::cout << "Do you want to encrypt (E) or decrypt (D)?";
        std::cin >> choice;
        std::string  key;
        if (toupper(choice) == 'E') {
            // Encryption
            char method;
            std::cout << "Choose encryption method (C for Caesar, V for Vigenere):";
            std::cin >> method;

            std::string plaintext;
            std::cout << "Enter plaintext: "<< std::endl;
            std::getline(std::cin >> std::ws, plaintext);

            if (toupper(method) == 'C') {
                // Caesar Encryption
                int shift;
                std::cout << "Enter shift value for Caesar encryption:";
                std::cin >> shift;

                std::string ciphertext = Caesar_Cipher::encrypt(plaintext, shift);
                std::cout << "Encrypted text: " << ciphertext << std::endl;
            } else if (toupper(method) == 'V') {
                std::cout << "Enter keyword: ";
                std::cin >> key;
                // Vigenere Encryption
                Vigenere cipher(key);
                std::string ciphertext = cipher.encrypt(plaintext);
                std::cout << "Generated Key: " << key << std::endl;
                std::cout << "Encrypted text: " << ciphertext << std::endl;
            } else {
                std::cerr << "Invalid encryption method." << std::endl;
            }
        } else if (toupper(choice) == 'D') {
            // Decryption
            char method;
            std::cout << "Choose decryption method (C for Caesar, V for Vigenere):";
            std::cin >> method;

            std::string ciphertext;
            std::cout << "Enter ciphertext:"<< std::endl;
            std::getline(std::cin >> std::ws, ciphertext);

            if (toupper(method) == 'C') {
                // Caesar Decryption
                int shift;
                std::cout << "Enter shift value for Caesar decryption:";
                std::cin >> shift;

                std::string decryptedText = Caesar_Cipher::decrypt(ciphertext, shift);
                std::cout << "Decrypted text:" << decryptedText << std::endl;
            } else if (toupper(method) == 'V') {
                std::cout << "Enter key: ";
                std::cin >> key;
                Vigenere decipher(key);
                // Vigenere Decryption
                std::string decryptedText = decipher.decrypt(ciphertext);
                std::cout << "Decrypted text:" << decryptedText << std::endl;
            } else {
                std::cerr << "Invalid decryption method." << std::endl;
            }
        } else {
            std::cerr << "Invalid choice. Please enter 'E' for encryption or 'D' for decryption." << std::endl;
        }

        // Ask if the user wants to perform another operation
        std::cout << "Do you want to perform another operation? (Y/N):";
        std::cin >> choice;

    } while (toupper(choice) == 'Y');

    return 0;
}

