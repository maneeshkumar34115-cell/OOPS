#include<iostream>
//single inheritance
using namespace std;

class B{
protected:
    int i ;
    public:
    void get(){
        cout<<"enter i";
        cin>>i;
    }
};
class D: public B{
      public:
      void show(){
       cout<<"value of i =="<<i;
      }
};
int main(){
    D obj;
    obj.get();
    obj.show();

    return 0;
}