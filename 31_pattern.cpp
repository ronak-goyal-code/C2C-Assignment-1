#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    cout<<"REQUIRED PATTERN :-"<<endl;
    
    for(int i=1; i<=2*n-1; i++){
        for(int j=1; j<=2*n-1; j++){
            if(i+j <= n+1 || j-i >= n-1 || i-j >= n-1 || j+i >= (3*n-1) ){
                cout<<"* ";
            }
            else cout<<"  ";
        }
        cout<<endl;
    }
    
    return 0;
}