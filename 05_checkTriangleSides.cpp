#include<iostream>

using namespace std;

int main(){
    int a,b,c;

    cout<<"Enter sides of triangle : ";
    cin>>a>>b>>c;

    int sum_a_b = a + b;
    int sum_a_c = a + c;
    int sum_b_c = b + c;

    if(sum_a_b > c && sum_a_c > b && sum_b_c > a){
        cout<<a<<", "<<b<<" and "<<c<<" are the sides of triangle."<<endl;
    }
    else{
        cout<<a<<", "<<b<<" and "<<c<<" are not the sides of triangle."<<endl;
    }

    return 0;

}