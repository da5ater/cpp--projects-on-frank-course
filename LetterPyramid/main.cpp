#include <iostream>
#include <string>

using namespace std;

int main() {
    int space, rows ;

    string my_str;
        
    cout <<"Enter your string: ";
    getline(cin,my_str);
    
    rows = my_str.length() ;
    
    for(int i = 0 ; i < rows ; i++ ){
        // spaces
        for (space = 0 ; space < rows - i ; ++space){
            cout << "*";
        }
            // characters
            for(int l = 0 ; l <= i ; l++){
                cout << my_str[l];
            }

            for(int r = i-1 ; r >= 0 ; r--){
                            cout << my_str[r];
                        } 
            
        cout << endl;
    }
}