#include <iostream>

using namespace std;

int main()
{
    int score {10}; 
    double scored {10}; 
    
    int *x;
    
    x = &score;
    cout <<"value of x is : "<< x <<endl;
    
    cout <<"address of x is : "<< &x <<endl;
    
    cout <<"size  of x is : "<<sizeof(x) <<endl;
    
    x = nullptr;
    cout <<"value  of x is : "<< x <<endl;
    
    
    

}