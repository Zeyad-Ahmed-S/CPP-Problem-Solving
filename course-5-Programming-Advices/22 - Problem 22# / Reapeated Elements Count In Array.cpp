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

int readsize_element(string Message){
    int sizeN;
    cout<< Message << "\n";
    cin>> sizeN;
    return sizeN;
}

vector<int> readelement(vector<int> &s11,int si){
    for(int i = 0 ; i < si; i++){
        cout<< "Element [" << i + 1 << "] : "; cin>> s11[i];
        
    }
    return s11;
}
int read_check_num(){
    int num;
    cout<< "enter check number Please : ";
    cin>> num;
    return num;
}

void print_ori(vector<int> &s11,int si, int nn){
    cout<< "Original Array : ";
    for(int i = 0 ; i < si; i++){
        cout<< s11[i] << " ";
    }
    cout<<endl;

    int cnt = 0;
    for(int i = 0 ;i<si;i++){
        if(s11[i]==nn){
            cnt++;
        }
    }
    cout<< nn << " is repeated " << cnt << " times(s)\n";

}

int main() {

    int si = readsize_element("enter N size the element");

    vector<int> v(si);
    readelement(v,si);
    
    int nn = read_check_num();
    
    print_ori(v,si,nn);
}
