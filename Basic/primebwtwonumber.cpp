#include<iostream>
using namespace std;

int main(){
    int a, b;
    cin>>a>>b;
    for(int num=a; num<=b; num++){
        int i;
        for(i=2; i<num; i++){
            break;
        }
        if(i==num){
            cout<<num<<endl;
        }
    }
    return 0;
}