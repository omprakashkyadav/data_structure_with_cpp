#include<iostream>
using namespace std;

int main(){

    int a; //Declaration
    a = 12; //Initialization

    cout<<"Hello, World"<<endl;
    cout<<"Size of Int "<<sizeof(a)<<endl;

    float b;
    cout<<"Size of Float "<<sizeof(b)<<endl;

    char c;
    cout<<"Size of Char "<<sizeof(c)<<endl;

    bool d;
    cout<<"size of Boolean "<<sizeof(d)<<endl;

    short int si;
    long int li;

    cout<<"Size of Short Int"<<sizeof(si)<<endl;
    cout<<"Size of Long Int"<<sizeof(li)<<endl;
    
    return 0;
}