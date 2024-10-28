#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    cout<<"REQUIRED PATTERN :-"<<endl;
    int nsp = n-1;
    int nst = 1;
    
    for(int i=1; i<=2*n-1; i++){

        for(int j=1; j<=nsp; j++){
            cout<<"  ";
        }

        for(int j=1; j<=nst; j++){
            cout<<"* ";
        }
        
        if(i < n){
            nsp--;
            nst+=2;
        }
        
        else{
            nsp++;
            nst -= 2;
        }
        cout<<endl;
    }

    return 0;
}