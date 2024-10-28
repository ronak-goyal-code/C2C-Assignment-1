#include<iostream>

using namespace std;

int main(){
    int a,b,c;

    cout<<"Enter Three Numbers : ";
    cin>>a>>b>>c;

    // first Method  

    /* if(a > b && a > c){
        cout<<"Greatest number between "<<a<<", "<<b<<" and "<<c<<" is : "<<a<<endl;
    }

    else if(b > a && b > c){
        cout<<"Greatest number between "<<a<<", "<<b<<" and "<<c<<" is : "<<b<<endl;
    }

    else{
        cout<<"Greatest number between "<<a<<", "<<b<<" and "<<c<<" is : "<<c<<endl;
    } */


    // second Method Nested If Else 

    if(a > b){
        if(a > c){
            cout<<"Greatest number between "<<a<<", "<<b<<" and "<<c<<" is : "<<a<<endl;
        }
        else{
            cout<<"Greatest number between "<<a<<", "<<b<<" and "<<c<<" is : "<<c<<endl;
        }
    }
    else{ // means a < b // assume all numbers are different
        if(b > c){
            cout<<"Greatest number between "<<a<<", "<<b<<" and "<<c<<" is : "<<b<<endl;
        }
        else{
            cout<<"Greatest number between "<<a<<", "<<b<<" and "<<c<<" is : "<<c<<endl;
        }
    }

    return 0;

}