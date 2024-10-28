#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;

    int count = 0;
    for(int i=1; i<=n; i++){
        if(n%i == 0) count++;
    }

    if(count == 2) cout<<n<<" is prime."<<endl;
    else cout<<n<<" is not prime."<<endl;

}