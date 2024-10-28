#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    

    if(n <= 2){
        cout<<n<<"th fibonacci number is : 1"<<endl;
        return 0;
    }

    int a = 1;
    int b = 1;
    int c;

    for(int i=2; i<n; i++){
        c = a + b;
        a = b;
        b = c;
    }

    cout<<n<<"th fibonacci number is : "<<c<<endl;

    return 0;
}