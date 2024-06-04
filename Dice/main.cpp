#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
    
    int count{10}; //number of generated random numbers
    
    //the range
    int min{1}; //lower bound
    int max{6}; //upper bound
    
    srand(time(nullptr));
    
     for(int i = 0 ; i <= count ; i++ ){
         
         cout << rand() % max + min <<endl;
        
     }
            
    return 0 ;   
}