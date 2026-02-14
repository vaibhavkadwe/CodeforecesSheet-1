#include<iostream>
using namespace std;
int main(){
    int a,b;
    int floor,ceil,round;
    cin>>a>>b;
    floor=((a*1.0)/b);
    ceil=((a*1.0)/b)+1;
    cout<<"floor "<<a<<" / "<<b<<" = "<<floor<<endl;
    cout<<"ceil "<<a<<" / "<<b<<" = "<<ceil<<endl;
    cout<<"round "<<a<<" / "<<b<<" = "<<round<<endl;
    return 0;
}