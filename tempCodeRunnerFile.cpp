#include<iostream>
using namespace std;
int main(){
    long n;
    cin>>n;
    long ans = 0;
    long pv = 1;
    long digit ;
    
    while(n!=0){
        digit = n%2;
        ans = ans + digit*pv;
        pv = pv*10;
        n = n/2;
    }
    cout<<ans<<endl;
   
}