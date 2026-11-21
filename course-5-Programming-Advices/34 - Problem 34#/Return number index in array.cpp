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

int FindNumberPositionInArray (vector<int> &Vs, int number ,int &vectorlenght){

    for(int i = 0 ; i < vectorlenght ; i++){

        if(Vs[i] == number) return i;

    }

    return -1;
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

    cout<< "Number you are looking for is: " << number_of_Research <<"\n";

    int numberposition  = FindNumberPositionInArray (vst,number_of_Research,vectorlenght);

    
        if(number_of_Research == -1){

             cout << "\nThe number is not found :-(\n";

        }else{
           
            cout<< "\nThe number found at position: " << numberposition <<"\n";
            cout<< "\nThe number found its order: " << numberposition+1 <<"\n";

        }

    return 0;
    
}
