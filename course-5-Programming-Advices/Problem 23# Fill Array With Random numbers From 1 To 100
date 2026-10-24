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
    for(int i = 0 ; i < n ; i++){
        int randnumnew  = generate_randomnumber(1,100);
        varray.push_back(randnumnew);
    }
}

void print(int n,vector<int> &varray){
    cout<<"Array of element: ";
    for(int i = 0 ; i < n; i++){
        cout<< varray[i] << " ";
    }
    cout<<endl;
}

int main() {
    srand( unsigned(time(NULL)) );
    
    int number; 
    cout<< "Enter number of element: \n";
    cin>>number;
    vector<int> varray;

    push_vector(varray,number);
    print(number,varray);

}
