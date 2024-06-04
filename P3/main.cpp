#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <iterator>

using namespace std;

int main(){
    
    char selection {};
    vector<int> list{};
    int number {};
    
    do{
        cout << "*----------------------------------*\n";
        cout << "P - Print numbers \n"
                "A - Add a number \n"
                "M - Display mean of the numbers \n"
                "S - Display the smallest number \n"
                "L - Display the largest number \n"
                "Q - Quit \n"
                "Enter your choice: \n";
    
        cin >> selection;
        
        switch (selection){
            case 'Q':
            case 'q':
                    cout << "Goodbye";
                    break;
            case 'p':
            case 'P':
                    if (list.size() == 0 ){
                        cout << "[] - the list is empty\n";
                    }else{
                        cout << "---  here is the list ---\n";
                        cout << "[ ";
                        for (auto element : list){
                            cout << element << " "; 
                        };
                        cout << "]\n";
                    }
                    break;
            case 'A':
            case 'a':
                    cout << "[Please add the number you would like to add]\n";                    
                    cin >> number;
                    list.push_back(number);
                    cout << number <<" is added succefully! \n";
                    
                    break;
            case 'M':
            case 'm':
                    if(list.size() == 0){
                        cout << "Unable to calculate the mean! - no data\n";
                    }else {
                        double sum = accumulate(list.begin(),list.end(),0.0);
                        double mean = sum / list.size();
                        cout << " Mean is -> " << mean <<endl;
                    }
                    break;
                    
            case 's':
            case 'S':
                    if (list.size() == 0){
                        cout << " Unable to determine the smallest number - list is empty \n";
                    }else{
                        auto result = min_element(begin(list),end(list));
                        cout << *result <<endl;                        
                    }
                    break;
                    
            case 'l':
            case 'L':
                    if (list.size() == 0){
                        cout << " Unable to determine the largest number - list is empty\n";
                    }else{
                        auto result = max_element(begin(list),end(list));
                        cout << *result <<endl;
                    }
                    break;
            default:
                    cout <<  selection << " is Unknown selection, please try again.\n";
        }
    }while( selection != 'Q' && selection != 'q');



    return 0 ;   
};

/*  pseudocode 
 * 
 * 1- implement do while loop to show the following menu ---
 * [Your program should display a menu options to the user as follows:
    
    P - Print numbers
    A - Add a number
    M - Display mean of the numbers
    S - Display the smallest number
    L - Display the largest number
    Q - Quit

    Enter your choice:]
     * 
 * 2- if user input is illegal prompt the following ---
 * [ X is Unknown selection, please try again.]
 * and the menu options should be
   displayed again.
 * 3- input in upper and lower case are legal
 ================================================
   4- If the user enters 'P' or 'p': ---
    * [
    *   - If the list is empty  display "[] - the list is empty"
    *   - If the list is not empty displaye the list's elements inside square brackets separated by a space. 
          For example, [ 1 2 3 4 5 ]
      ]
====================================================    
    5- If the user enters 'A' or 'a' : ---
     * [
     *   - prompt the user for the following -[Please add the number you would like to add]
     *   - add the number to the list.
     *   - prompt the user that the number is added. -[X is added succefully]
     *   - 
     * ]
     * 
=========================================================================
    6- If the user enters 'M' or 'm'  : ---
     * [
     *   - calculate the mean of the elements in the list
     *   - prompt user the following [ the mean is X ].
     *   - If the list is empty display [ Unable to calculate the mean - no data ]
     * 
===================================================================================
     * 
    7- If the user enters 'S' or 's'  : ---
     * [
     *   - display the smallest element in the list.
     *   - If the list is empty,display [Unable to determine the smallest number - list is empty]
     * ]
     * 
=================================================================================================
     8- If the user enters 'L' or 'l'  : ---
      * [
      *  - display the largest element in the list
      *  - If the list is empty display,  [Unable to determine the largest number - list is empty]
      * 
     9- If the user enters 'Q' or 'q'  ,display  ['Goodbye"]  and the program should terminate. 
=========================================================================================================================================================
 * */
