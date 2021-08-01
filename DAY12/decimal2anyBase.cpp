#include<bits/stdc++.h>
using namespace std;

int convert(int n, int b){
    int res=0,rem,p=1;

    while(n!=0){
        rem=n%b;
        res+=(p*rem);
        p=p*10;
        n/=b;
    }
    return res;
}

int main(){
    int num;
    int base;
    cin>>num>>base;
    int ans=convert(num,base);
    cout<<ans;
    return 0;
}
