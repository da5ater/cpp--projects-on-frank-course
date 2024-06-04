#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <iterator>

using namespace std;

void disply_menu();

void say_GB();

void print_list(vector<int> & list);

void add_number(vector<int> &list , int number );

void disply_mean(vector<int> &list);

void smll_number(vector<int> &list);

void larg_number(vector<int> &list );


int main(){
    
    char selection {};
    vector<int> list{};
    int number {};
    
    do{
        disply_menu();
        
        cin >> selection;
        
        switch (selection){
            case 'Q':
            case 'q':
                     say_GB();
                     break;
            case 'p':
            case 'P':
                    print_list(list);
                    break;
            case 'A':
            case 'a':
                    add_number( list , number );
                    break;
            case 'M':
            case 'm':
                    disply_mean(list);
                    break;
                    
            case 's':
            case 'S':
                    smll_number(list);
                    break;
                    
            case 'l':
            case 'L':
                    larg_number(list);
                    break;
            default:
                    cout <<  selection << " is Unknown selection, please try again.\n";
        }
    }while( selection != 'Q' && selection != 'q');
    return 0 ;   
};

//--------------//

void disply_menu(){
        cout << "*----------------------------------*\n";
        cout << "P - Print numbers \n"
                "A - Add a number \n"
                "M - Display mean of the numbers \n"
                "S - Display the smallest number \n"
                "L - Display the largest number \n"
                "Q - Quit \n"
                "Enter your choice: \n";
    
}

//--------------//

void say_GB(){
    cout << "Goodbye";
}

//--------------//

void print_list(vector<int> &list){
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
}

//--------------//

void add_number(vector<int> &list , int number ){
    cout << "[Please add the number you would like to add]\n";                    
                    cin >> number;
                    list.push_back(number);
                    cout << number <<" is added succefully! \n";
}

// -------------//

void disply_mean(vector<int> &list){
                        if(list.size() == 0){
                        cout << "Unable to calculate the mean! - no data\n";
                    }else {
                        double sum = accumulate(list.begin(),list.end(),0.0);
                        double mean = sum / list.size();
                        cout << " Mean is -> " << mean <<endl;
                    }
}

// ------------ //

void smll_number(vector<int> &list){
                    if (list.size() == 0){
                        cout << " Unable to determine the smallest number - list is empty \n";
                    }else{
                        auto result = min_element(begin(list),end(list));
                        cout << *result <<endl;                        
                    }
}



void larg_number(vector<int> &list ){
                    if (list.size() == 0){
                        cout << " Unable to determine the largest number - list is empty\n";
                    }else{
                        auto result = max_element(begin(list),end(list));
                        cout << *result <<endl;
                    }
}