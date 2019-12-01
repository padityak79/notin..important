#include<bits/stdc++.h>
using namespace std;
int prime[2400];
void primes(int n){
     int i,j;
     for(i=0;i<=n;i++){
        prime[i]=1;
     }
     for(i=2;i*i<=n;i++){
        if(prime[i]){
            for(j=i*i;j<=n;j+=i){
                prime[j]=0;
            }
        }
     }
     for(i=2;i<=n;i++){
        if(prime[i])
            cout<<"  "<<i;
     }
}




int main(){
    primes(23);
    return 0;
}
