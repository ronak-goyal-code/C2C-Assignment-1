#include<iostream>

using namespace std;

int main(){
    float num;
    cout<<"Enter float number : ";
    cin>>num;

    int integer_part = (int)(num); // concept of typeCasting
    float fractional_part = num - (float)(integer_part);

    if(num < 0){
        fractional_part = 1 + fractional_part; // fractional part is between 0 to 1 exclusive.
    }

    cout<<"Fractional part of "<<num<<" is : "<<fractional_part<<endl;

}