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

int generate_randomnumber(int from, int to){

    int random = rand()%(to - from + 1) + from; 
    return random;
}

void push_vector(vector<int> &varray, int n){
    int sum = 0;
    for(int i = 0 ; i < n ; i++){

        int randnumnew  = generate_randomnumber(1,100);
        varray.push_back(randnumnew);

    }
    
}

void copy_array(int n , vector<int> &varray , vector<int> &varray_2){

    for(int i = 0; i < n ; i++){
        varray_2.push_back(varray[i]);
    }

}
void print(int n,vector<int> &varray , vector<int> &varray_2){

    cout<< "Array 1 element: ";

    for(int i = 0 ; i < n; i++){
         cout<<  varray[i] <<" "; 
    }

    cout<< "\nArray 2 element After Copy: ";

    for(int i = 0 ; i < n ; i++){
        cout<< varray_2[i] << " ";
    }

}

int main() {
    srand( unsigned(time(NULL)) );
    
    int number; 
    cout<< "Enter number of element: \n";
    cin>>number;
    vector<int> varray;
    vector<int> varray_2;

     push_vector(varray,number);
     copy_array(number,varray,varray_2);

     print(number,varray,varray_2);

}
