#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    cout<<"REQUIRED PATTERN :-"<<endl;
    
    int nsp = 2*(n-1);
    int nst = 1;
    
    for(int i=1; i<=2*n; i++){
        for(int j=1; j<=nst; j++){
            cout<<"* ";
        }
        
        for(int j=1; j<=nsp; j++){
            cout<<"  ";
        }
        
        for(int j=1; j<=nst; j++){
            cout<<"* ";
        }
        
        cout<<endl;
        
        if(i < n){
            nsp -= 2;
            nst++;
        }
    
        else if(i > n){
            nsp += 2;
            nst--;
        }
    }
    return 0;
}