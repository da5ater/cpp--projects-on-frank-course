#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*


 
    
 
   Output
   ---------------------
   Array 1: [ 1 2 3 4 5 ]
   Array 2: [ 10 20 30 ]
   Result: [ 10 20 30 40 50 20 40 60 80 100 30 60 90 120 150 ]
*/

/*-----------------------------------------------------------------------*/ 

int* apply_all(int* arr1 , size_t size1, int* arr2, size_t size2);

void print(int* arr , size_t size);


int main() {
    const size_t array1_size {5};
    const size_t array2_size {3};
    
    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};
    
    cout << "Array 1: " ;
    print(array1,array1_size);
    
    cout << "Array 2: " ;
    print(array2,array2_size);
    
    int *results = apply_all(array1, array1_size, array2, array2_size);
    constexpr size_t results_size {array1_size * array2_size};

    cout << "Result: " ;
    print(results, results_size);
    
    cout << endl;

    return 0;
}

int* apply_all(int* arr1  , size_t size1 , int* arr2, size_t size2){
    int Big_size = size1 * size2;
    
    int* BigArray = nullptr;
    BigArray = new int[Big_size];
    
    int position {0};
    for(size_t j{0}; j<size2 ; j++ ){
        for(size_t i{0}; i<size1 ; i++){
            BigArray[position] = arr1[i] * arr2[j]; //stores each operation in the next element of the Big array;
            position++;
        }
    }
    
    return BigArray;
};

void print(int* arr , size_t size){
    cout << "[ ";
    for(size_t i {0} ; i < size ; i++){
        cout << arr[i] << " ";
    }
    cout << " ]";
    cout <<endl;
}