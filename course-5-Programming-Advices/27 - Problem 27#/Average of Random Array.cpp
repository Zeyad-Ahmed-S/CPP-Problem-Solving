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

int push_vector(vector<int> &varray, int n){
    int sum = 0;
    for(int i = 0 ; i < n ; i++){

        int randnumnew  = generate_randomnumber(1,100);
        varray.push_back(randnumnew);

        sum += randnumnew;
    }
    return sum;
}

void print(int n,vector<int> &varray, int sum){

    cout<< "Array of element: ";

    for(int i = 0 ; i < n; i++){
         cout<< varray[i] <<" "; 
    }

    cout<< "\nAverage All Of Number: " << float(sum) / n <<"\n";
}

int main() {
    srand( unsigned(time(NULL)) );
    
    int number; 
    cout<< "Enter number of element: \n";
    cin>>number;
    vector<int> varray;

    int sum = push_vector(varray,number);

    print(number,varray,sum);

}
