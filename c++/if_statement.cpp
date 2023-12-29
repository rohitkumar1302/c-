#include<iostream>
using namespace std;
int main()
{
    // bool isMale = false;
    // if (isMale){
    //     cout<<"You are a male";
    // }    
    // else{
    //     cout<<"you are a not male";
        
    // }
    bool ismale =true;
    bool istall = false;

    if (ismale & istall){
        cout<<"you are a tall male";
    }else if (ismale & !istall)
    {
        cout<<"You are a short male";

    }else if(!ismale & istall){
        cout<<"you are not male and not tall";
    }else{
        cout<<"you are not male and not tall";
    }
    
    
    
    
    return 0;
}
