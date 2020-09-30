#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii ;

template<typename T>
bool is_prime(T n){
    // returns 1 if number is prime
    // otherwise returns 0
    if (n==2){
        return 1 ;
    }
    if (n%2==0 && n==1){
        return 0;
    }
    T i=3 ;
    while (i*i<=n){
        if (n%i==0){
            return 0;
        }
        i+=2;
    }
    return 1 ;
}

######## python 3.8.2 ########

def is_prime(n):
    ''' returns 1 if number is prime
        else 0
     '''
    if n==2:
        return 1
    if n%2==0 and n==1:
        return 0
    i=3
    while (i*i<=n):
        if n%i==0 :
            return 0
        i+=2
    return 1
