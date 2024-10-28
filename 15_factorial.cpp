#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter value of n : ";
    cin>>n;

    // brute force
    // cout<<"Factorial of first "<<n<<" natural numbers : "<<endl;
    // for(int i=1; i<=n; i++){
    //     int fact = 1;
    //     for(int j=2; j<=i; j++){
    //         fact *= j;
    //     }

    //     cout<<fact<<endl;

    // }

    // optimal

    cout<<"Factorial of first "<<n<<" natural numbers : "<<endl;

    int fact = 1;

    for(int i=1; i<=n; i++){
        fact *= i;
        cout<<fact<<endl;
    }

    

}