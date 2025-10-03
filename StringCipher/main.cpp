#include <string>
#include <iostream>

using namespace std;

int main()
{
    /*
    cout << "Enter the text you want to encrypt: ";
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    
    string input_text {};
    getline(cin, input_text);
    
    string encrypted_text {};
    for (char c: input_text) {
        size_t new_value {alphabet.find(c)};
        if (new_value != string::npos) {
            encrypted_text += key.at(new_value);
        } else {
            encrypted_text += c;   
        }
    }
    
    cout << "The encrypted text is: " << encrypted_text << endl;
    
    string decrypted_text {};
    for (char c: encrypted_text) {
        size_t new_value {key.find(c)};
        if (new_value != string::npos) {
            decrypted_text += alphabet.at(new_value);   
        } else {
            decrypted_text += c;
        }
    }
    
    cout << "The decrypted text is: " << decrypted_text << endl;
    */
     
     // Letter pyramid
     cout << "Enter the string you want to create a pyramid for: " << endl;
     
     string input_text {};
     getline(cin, input_text);
     
     size_t total_length = input_text.length();
     
     for (size_t i {0}; i < total_length; i++) {
         size_t num_spaces = total_length - (i + 1); 
         for (size_t space_count {0}; space_count < num_spaces; space_count++) {
            cout << " ";
            }
        
         for (size_t j {0}; j <= i; j++) {
             cout << input_text[j];
         }
         
         if (i > 0) {
             for (size_t k {i - 1}; k < i; k--) {
                 cout << input_text[k];
             }
         }
         cout << endl;
     }
}