#include<iostream>
using namespace std;

int main(){
    int contodd=0,conteven=0,num[500];
    int i=0;
    while (1)
    {
        cout << "Enter an integer: ";
        cin>>num[i];
        if(num[i]==0){
            break;
        }
        if(num[i]%2==0){
            conteven++;
        } 
        if(num[i]%2==1){
            contodd++;
        }
        i++;
    }

    
    
    cout << "#Even numbers = "<<conteven<<"\n";
    cout << "#Odd numbers = "<<contodd;
    return 0;
}
