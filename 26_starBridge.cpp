#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    cout<<"REQUIRED PATTERN :-"<<endl;
    
    for(int i = 1 ; i<=2*n-1 ; i++){
        cout<<"* ";
    }
    cout<<endl;

    for(int i = 1 ; i<=n-1 ; i++){
        for(int j = 1 ; j<=n-i ; j++){
            cout<<"* ";
        }
        for(int k = 1 ; k<=2*i-1 ; k++){
            cout<<"  ";
        }
        for(int l = 1 ; l<=n-i ; l++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}