#include<iostream>
using namespace std;

int main(){
    char button;
    cout<<"Input a Character: ";
    cin>>button;

    if(button=='a'){
        cout<<"Hello World"<<endl;
    }
    else if(button=='b'){
        cout<<"Namaste"<<endl;
    }
    else if(button=='c'){
        cout<<"Salut"<<endl;
    }
    else if(button='d'){
        cout<<"Hola"<<endl;
    }
    else if(button='e'){
        cout<<"Ciao"<<endl;
    }
    else{
        cout<<"I am still learning More"<<endl;
    }
}