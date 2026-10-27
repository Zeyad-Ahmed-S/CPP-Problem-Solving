#include <iostream>
#include <climits>
#include <cmath>
#include <ctime>
#include <cstring>
#include <iomanip>
#include <algorithm>
#include <cctype>
#include <vector>
#include <cstdio>
#include <iomanip>
#include <fstream>
#include <windows.h>
#include <ctime>
#include <cstdlib>
#include "elzoz.h"
using namespace std;
// using namespace competitiveProgramming;

int readPositivenumber(string message){
    int num;
    do{

        cout<< message << "\n";
        cin>>num;

    }while(num <= 0);

    return num;
}

int generate_randomnumber(int from, int to){

    int random = rand()%(to - from + 1) + from; 
    return random;
}


void FillArrayWithRandomNumbers (vector<int> &v , int size_array){
        
        for(int i = 0 ; i < size_array; i++){
            int randomnum = generate_randomnumber(1,100);
            v.push_back(randomnum);
        }
}

void SumOf2Arrays (vector<int> &v1 , vector<int> &v2 , vector<int> &sum_array , int size_array){
        
    int sum = 0;

    for(int i = 0; i < size_array ; i++){

        sum_array.push_back( v1[i] + v2[i] );
    }
}

void printarray (vector<int> &v , int size_array){

    for(int i = 0 ; i < size_array ; i++){
        cout<< v[i] << " ";
    }
    cout<< "\n";
}


int main() {
    
    srand( unsigned(time(NULL)) );

    int size_array  = readPositivenumber("Enter number of element: ");

    vector<int> varray; vector<int> varray_2; vector<int> sum_array;

    FillArrayWithRandomNumbers(varray , size_array);
    FillArrayWithRandomNumbers(varray_2 , size_array);

    SumOf2Arrays(varray,varray_2,sum_array,size_array);

    cout<< "Array 1 element: \n";
    printarray(varray , size_array);

    cout<< "\nArray 2 element: \n";
    printarray(varray_2 , size_array);

    cout<< "\nSum of array 1 and array 2 element: \n";
    printarray(sum_array , size_array);

    return 0;
}
