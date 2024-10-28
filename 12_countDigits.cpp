#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;

    int k = n; // don't loose your input
    int count = 0;
    while(k){
        count++;
        k /= 10;
    }

    cout<<"Count of digits in "<<n<<" is "<<count<<endl;

}