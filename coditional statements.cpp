#include <iostream>
using namespace std;
int main() {
    int x,y;
    cout<<"Enter the value of x: ";
    cin>>x;
    cout<<"Enter the value of y: ";
    cin>>y;
    if(x>y) {
         cout<<x<<" Is Greater Than "<<y;
    }
    else if(x==y){
        cout<<"Both Are Equal";
    }
    else{
        cout<<x<<" Is Lower Than "<<y;
    }
    int z,a;
    cout<<"\n\nwhat do you want to do ?\n1-Addition\n2-substraction\n3-Multiplication\n4-Division\n"<<endl;
    cin>>z;
    switch (z){
        case 1:
        a=x+y;
        cout<<"Addition= "<<a;
        break;
        case 2:
        a=x-y;
        cout<<"Substraction= "<<a;
        break;
        case 3:
        a=x*y;
        cout<<"Multiplication= "<<a;
        break;
        case 4:
        a=x/y;
        cout<<"Division= "<<a;
        break;
    }
}
