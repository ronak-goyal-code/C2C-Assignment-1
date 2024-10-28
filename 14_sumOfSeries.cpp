#include<iostream>

using namespace std;

int main(){
    // 1 - 2 + 3 - 4 + 5 - 6 + ...
    int n;
    cout<<"Enter Number of terms in series : ";
    cin>>n;

    int sum = 0;

    for(int i=1; i<=n; i++){
        if(i%2 == 1) sum += i;
        else sum -= i;
    }

    // maths
    // int sum = -1 * (n/2) + n * (n % 2);

    cout<<"Sum of Series is : "<<sum<<endl;

}