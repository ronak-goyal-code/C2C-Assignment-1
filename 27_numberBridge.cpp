#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    cout<<"REQUIRED PATTERN :-"<<endl;
    
    int nsp = 1;
    int nst = n-1;

    for(int j=1; j<=2*n-1; j++){
        cout<<j<<" ";
    }
    cout<<endl;
    
    for(int i=1; i<n; i++){
        int a = 1;
        for(int j=1; j<=nst; j++){
            cout<<a<<" ";
            a++;
        }
        
        for(int j=1; j<=nsp; j++){
            cout<<"  ";
            a++;
        }
        
        for(int j=1; j<=nst; j++){
            cout<<a<<" ";
            a++;
        }
        nst--;
        nsp += 2;
        cout<<endl;
    }

    return 0;
}