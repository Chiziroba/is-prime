#include <iostream>

using namespace std;

int main()
{
    int n ;
    bool flag=false;
    cout<<"Please enter a number:";
    cin>>n;
    for(int i=2; i<n; i++){
        if(n%i==0){
            flag=true;
            break;

        }
    }
    if(flag==false && n>1){
            cout<<"Number is Prime";

    }else{
        cout<<"Number is not prime";
    }
    return 0;
}
