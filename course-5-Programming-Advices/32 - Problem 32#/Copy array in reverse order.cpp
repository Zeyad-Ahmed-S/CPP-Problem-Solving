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
// #include "elzoz.h"
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

            int random = generate_randomnumber(1,100);

            v.push_back(random);

        }
}

void CopyArrayInReverseOrder (vector<int> &V_Source , vector<int> &V_Destination , int size_array){

        for(int i = 0 ; i < size_array ; i++){ // = for (int i = size_array ; i > 0 ; i--)

            V_Destination[i] = V_Source[size_array - 1 - i]; // if size_array = 10 >> v[9] >> v2[0] = value index 9 

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

    int size_array = readPositivenumber("Enter number of elements: ");

    vector<int> varray;

    FillArrayWithRandomNumbers(varray , size_array);

    vector<int> varray_2(size_array, 0);

    cout<< "\nArray 1 elements: \n";
    printarray(varray , size_array);

    CopyArrayInReverseOrder(varray,varray_2,size_array);
    
    cout<< "\nArray 2 elements after copy: \n";
    printarray(varray_2 , size_array);


    return 0;
}
