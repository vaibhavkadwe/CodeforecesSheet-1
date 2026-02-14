#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long a,b,c,d;
    cin>>a>>b>>c>>d;

    //Note - Here we use log as not using it will cause stack overflow 
    //as the values will be out of bounds
    
    if(b*log(a)>d*log(c)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}