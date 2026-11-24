//function with return type and without parameter 
#include<iostream>
using namespace std;

int add();//function declaration 

int add(){
    //fuction definition 
    int a,b;
    cout<<"\n enter a=";
    cin>>a;
    cout<<"\n enter b=";
    cin>>b;
    return a+b;
};
int main(){
    int result = add();//function calling 
    cout<<"addition of a and b ="<<result;


    return 0;

}