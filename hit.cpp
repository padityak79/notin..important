#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int a, long long int b){
    if(a==0) return b;
    return gcd(b%a,a);
}
int main(){
long long int a=53,b=106;
cout<<a*b/gcd(a,b);
}
