#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    cout<<"REQUIRED PATTERN :-"<<endl;
    
    int nsp = 1;
    int nst = n-1;

    for(int j=1; j<=n; j++){
        cout<<(char)(j + 64)<<" ";
    }
    for(int j=n-1; j>=1; j--){
        cout<<(char)(j + 64)<<" ";
    }
    cout<<endl;
    
    for(int i=1; i<n; i++){
        for(int j=1; j<=nst; j++){
            cout<<(char)(j + 64)<<" ";
        }
        
        for(int j=1; j<=nsp; j++){
            cout<<"  ";
        }
        
        for(int j=nst; j>=1; j--){
           cout<<(char)(j + 64)<<" ";
        }
        nst--;
        nsp += 2;
        cout<<endl;
    }

    return 0;
}