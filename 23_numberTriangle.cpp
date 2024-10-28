#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    cout<<"REQUIRED PATTERN :-"<<endl;
    for(int i=1; i<=n; i++){
        for(int j=i; j<n; j++){
            cout<<"  ";
        }
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        for(int j=i-1; j>=1; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}