#include<iostream>

using namespace std;

int main(){
    int num;
    cout<<"Enter positive number : ";
    cin>>num;

    if((num % 3 == 0 || num % 5 == 0) && num % 15 != 0){
        cout<<"Condition is satisfied"<<endl;
    }
    else{
        cout<<"Condition is not satisfied"<<endl;
    }

    return 0;

}