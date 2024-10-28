#include<iostream>

using namespace std;

int main(){
    cout<<"Displaying AP : ";

    int first_term = 100;
    int common_difference = 3;

    for(int term = first_term; term > 0; term -= common_difference){
        cout<<term<<" ";
    }
    cout<<endl;

    return 0;
}