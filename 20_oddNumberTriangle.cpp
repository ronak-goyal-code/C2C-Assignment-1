#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    cout<<"Required pattern : "<<endl;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=2*i-1; j+=2){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}