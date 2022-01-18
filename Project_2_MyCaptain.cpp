#include<iostream>
using namespace std;

int main(){
    cout<<"Welcome to the Voter ID verification process \n"<<endl;
    int age;
    cout<<"Enter your age to check weather your eligible to vote or not: "<<endl;
    cin>>age;

    if (age>18)
    {
        cout<<"Congrats your are eligible to vote!"<<endl;
    }

    else if (age==18)
    {
        cout<<"We will Verify your Voter ID and Inform you"<<endl;
    }
    
    else
    {
        cout<<"Sorry! But you cannot vote this is against our rules"<<endl;
    }
    

    return 0;
}

// Contributed Suyash Vetal