#include<bits/stdc++.h>
using namespace std;
long long int power(long long int a,long long int b){
if(b==0)return 1;
else{
        long long ret=1;
        while(b!=0){
                if(b&1){
            ret=ret*a;
        }
        a=a*a;
        b>>=1;
    }
    return ret;
}
}
int main(){
long long int a=10,b=20;
cout<<power(b,a);
}
