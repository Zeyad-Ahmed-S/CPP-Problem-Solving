#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
using namespace std;


int ReadPositiveNumber(string message){

    int num;

    do{

    cout<< message << "\n";
    cin>>num;

    } while(num <= 0);
   
    return num;
}

int Generate_RandomNumber(int from , int to){
    int r_andom = rand() % (to - from - 1) + from;
    return r_andom;
}

bool FindNumberInArray (vector<int> &Vs, int number ,int &vectorlenght){

    for(int i = 0 ; i < vectorlenght ; i++){

        if(Vs[i] == number) return true;

    }

    return false;
}

void FillArrayWithRandomNumbers (vector<int> &Vs, int &vectorlenght){

    cout << "Enter number of elements: " <<"\n";
    cin>> vectorlenght;

    for(int i = 0; i < vectorlenght; i++){
        Vs.push_back(Generate_RandomNumber(1,100));
    }
}

void Show_ArrayElement(vector<int> &Vs, int &vectorlenght){

    cout<< "Array Element : " <<"\n";

    for(int i = 0 ; i < vectorlenght; i++){

        cout<<  Vs[i] << " ";

    }
    cout<<endl;
}




int main (){

    srand(unsigned(time(NULL)));

    vector<int> vst;
    int vectorlenght; 

    FillArrayWithRandomNumbers(vst,vectorlenght);

    Show_ArrayElement(vst,vectorlenght);

    int number_of_Research = ReadPositiveNumber("\nPlease enter a number to search for? ");

    cout << "\nNumber you are looking for is: " << number_of_Research << endl;

    if(FindNumberInArray(vst,number_of_Research,vectorlenght))
        cout<< "Yes it is found :-)\n";
    else
        cout<< "No, The number is not found :-(\n";
    
    return 0;
    
}
