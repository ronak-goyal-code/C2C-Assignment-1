#include<iostream>

using namespace std;

int main(){
    char a,b;
    cout<<"Enter two characters : ";
    cin>>a>>b;

    int ascii_a = (int)(a);
    int ascii_b = (int)(b);

    int diff = ascii_a - ascii_b;

    cout<<"Difference of ascii value of "<<a<<" and "<<b<<" is : "<<diff<<endl;
    return 0;

}