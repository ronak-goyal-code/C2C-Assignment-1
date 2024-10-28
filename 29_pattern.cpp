#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    cout<<"REQUIRED PATTERN :-"<<endl;
    
    for(int i=1; i<=2*n+1; i++){
        for(int j=1; j<=2*n+1; j++){
            if(i+j == n+2 || j-i == n || i-j == n || i+j == 3*n+2 || i==n+1 || j==n+1){
                cout<<"* ";
            }
            else cout<<"  ";
        }
        cout<<endl;
    }

    return 0;
}