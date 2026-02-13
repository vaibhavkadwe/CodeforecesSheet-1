#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    int a1,a2,a3;
    cin>>x>>y>>z;
    a1=x;
    a3=x;
    if(y<a1){
        a1=y;
    }
    if(z<a1){
        a1=z;
    }
    if(y>a3){
        a3=y;
    }
    if(z>a3){
        a3=z;
    }

    a2=x+y+z-a1-a3; //Median of the three numbers

    cout<<a1<<endl<<a2<<endl<<a3<<"\n\n";
    cout<<x<<endl<<y<<endl<<z;
    return 0;
}