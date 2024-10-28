#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    cout<<"REQUIRED PATTERN :-"<<endl;
    
    int a = n;
    for(int i=1; i<=2*n-1; i++){
        int b = n;
        for(int j=1; j<=2*n-1; j++){
            cout<<max(a,b)<<" ";
            if(j<n) b--;
            else b++;
        }
        if(i<n) a--;
        else a++;
        cout<<endl;
    }
    
    return 0;
}