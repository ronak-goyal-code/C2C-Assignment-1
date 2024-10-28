#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;

    int k = n; // don't loose your input
    int rev = 0;

    while(k){
        int d = k % 10;
        rev = rev * 10 + d;
        k /= 10;
    }

    cout<<"sum of number and reverse of number "<<rev+n<<endl;

}