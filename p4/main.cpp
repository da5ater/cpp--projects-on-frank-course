#include <cstring>
#include <iostream>
#include <cctype>
#include <string>

using namespace std;
int main()
{
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    string CodedMessage {};
    cout << "Please Enter you secret message : \n\n";
    string SecretMessage {};
    getline(cin , SecretMessage);
    
    cout << "**--------------encrypting----------------**\n\n";
    
    for (auto letter : SecretMessage){
        
        size_t index = alphabet.find(letter);
        
        char code = key[index];
        
        CodedMessage.push_back(code);
        
    }
    
    cout << " message is decoded ^-^ \n\n";
    
    cout << " the decrypted message is " << CodedMessage <<endl;
    cout << " the real meessage is " << SecretMessage <<endl;
    
    
    
    



    

    
    return 0 ;   
}

/*
 * 1- prompt the user to Enter a secrete message
 * 2- save this message in a variable called dicrypted message 
 * 3- loop in the dicrypted message using for loop in a range
 * 4- search for the index of each letter in the alphabet string 
 * 5- push back the refrence of it in the Key string into new string called encrypted message 
 * 6- display the encrypted message [ the code is X ]
 * 7- display the dicrypted message [ the real message is x]

*/