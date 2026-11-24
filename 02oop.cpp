// function without return type and without parameter 
#include<iostream>
using namespace std ;

void add(); //function declaration 
void add(){//function definition 
    int a,b;
    cout<<"\n enter a=";
    cin>>a;
    cout<<"\n enter b=";
    cin>>b;
    cout<<"\n add a and b ="<<a+b;
};
int main(){

add();//function calling 
    return 0;
}