#include <string>
#include <iostream>

using namespace std;

int main()
{
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
}