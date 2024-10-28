#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter number of term in GP : ";
    cin>>n;

    cout<<"Displaying GP : ";

    int term = 1;
    int common_ratio = 2;

    for(int i=1; i<=n; i++){
        cout<<term<<" ";
        term *= common_ratio;
    }
    cout<<endl;

    return 0;
}