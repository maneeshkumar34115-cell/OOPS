#include<iostream>
#include<math.h>
using namespace std;
 
class IT{
    private:
    int num,power,ans;
    public:
    IT(int n= 2,int p=3){
        num = n;
        power =p;
        ans = pow(n,p);

    }
    void show(){
        cout<<ans<<endl;
    }
};
int  main(){
    IT obj1;
    obj1.show();
    IT obj2(4,5);
    obj2.show();
 
}