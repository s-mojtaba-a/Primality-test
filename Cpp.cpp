#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii ;

template<typename T>
bool primality_test(T n){
    if (n==2){
        return 1 ;
    }
    if (n%2==0){
        return 1;
    }
    T i=3 ;
    while (i*i<=n){
        if (n%i==0){
            return 1;
        }
        i+=2;
    }
    return 0 ;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}
