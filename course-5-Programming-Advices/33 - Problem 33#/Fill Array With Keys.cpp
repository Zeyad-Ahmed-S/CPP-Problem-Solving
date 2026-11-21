#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
using namespace std;

enum entype{
    small_letters = 1,
    digit = 2,
    capital_letters = 3,
    special_charachter = 4,
};

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

char GetRandomCharacter (entype chartype){
    switch (chartype)
    {

    case entype::small_letters:
        return char(Generate_RandomNumber(97,122));
        break;

    case entype::capital_letters:
        return char(Generate_RandomNumber(65,90));
    break;

    case entype::digit:
        return char(Generate_RandomNumber(48,57));
    break;
    case entype::special_charachter:
        return char(Generate_RandomNumber(33,47));
    break;
    
    default:
        break;
    }
    return '\0';
}

string GenerateWord(entype CharType, short Length){
    string word;

    for(int i = 1; i <= Length; i++){

        word += GetRandomCharacter(CharType);

    }
    return word;
}

string GenerateKey (){
   string key;

   key = GenerateWord(entype::capital_letters,4) + "-";
   key+=GenerateWord(entype::capital_letters,4) + "-";
   key+=GenerateWord(entype::capital_letters,4) + "-";
   key+=GenerateWord(entype::capital_letters,4);
   
   return key;
}

void FillArrayWithKeys (vector<string> &Vs, short sizeV){

    for(int i = 0; i < sizeV; i++){
        Vs.push_back(GenerateKey());
    }
}

void GenerateKeys(short NumberOfKeys, vector<string> &Vs){

    for(int i = 0; i < NumberOfKeys; i++){
        cout<< "Key" << " [" << i+1 << "] : " << Vs[i] << "\n";
    }
}


int main (){

    srand(unsigned(time(NULL)));

    int num = ReadPositiveNumber("Pleaes enter how many keys to generate? ");

    vector<string> vst;

    FillArrayWithKeys(vst,num);

    GenerateKeys(num,vst);

    
}
