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
        for(int j=i; j>=1; j--){
            cout<<(char)(j+64)<<" ";
        }
        for(int j=2; j<=i; j++){
            cout<<(char)(j+64)<<" ";
        }
        cout<<endl;
    }

    return 0;
}