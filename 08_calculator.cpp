#include<iostream>

using namespace std;

int main(){
    int a,b;
    char op;

    cout<<"Enter Problem : ";
    cin>>a>>op>>b;

    cout<<"Result : ";

    switch(op){
        case '+' :
            cout<<a+b<<endl;
            break;
        case '-' :
            cout<<a-b<<endl;
            break;
        case '*' :
            cout<<a*b<<endl;
            break;
        case '/' :
            cout<<a/b<<endl;
            break;
    }

    return 0;
}