#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>

using namespace std;

int factorial(int n){

    assert( n >= 0 );
    if( n <= 1 )
        return 1;
    return n * factorial(n-1);
}

int main() {

    int n;
    cin>>n;
    cout<<factorial(n)<<endl;

    return 0;
}
