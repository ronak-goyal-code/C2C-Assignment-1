#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    cout<<"Required pattern : "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<(char)(j + 'A')<<" ";
        }
        cout<<endl;
    }
}