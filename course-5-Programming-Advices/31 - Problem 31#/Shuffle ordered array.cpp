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

void Swap (int &A , int &B){

    int Temp = A;

    A = B;

    B = Temp;
}

int generate_randomnumber(int from, int to){

    int random = rand()%(to - from + 1) + from; 
    return random;
}


void FillArrayWithRandomNumbers (vector<int> &v , int N){
        
        for(int i = 1 ; i <= N; i++){

            v.push_back(i);

        }
}

void ShuffleArray (vector<int> &v , int N){

    for(int i = 0 ; i < N ; i++){

        // Subtract 1 because random can reach N, causing out of bounds error
        int index1 = generate_randomnumber( 1 , N ) - 1; // if the array from 1 to 10 = 0 to 9
        int index2 = generate_randomnumber( 1 , N ) - 1; 

         Swap(v[index1] , v[index2]);
    }

}



void printarray (vector<int> &v , int N){

    for(int i = 0 ; i < N ; i++){
        cout<< v[i] << " ";
    }
    cout<< "\n";
}


int main() {
    
    srand( unsigned(time(NULL)) );

    int N = readPositivenumber("Enter number of elements: ");

    vector<int> varray;

    FillArrayWithRandomNumbers(varray , N);

    cout<< "Array element before shuffle: \n";
    printarray(varray , N);

    ShuffleArray(varray , N);

    cout<< "Array element after shuffle: \n";
    printarray(varray , N);


    return 0;
}
