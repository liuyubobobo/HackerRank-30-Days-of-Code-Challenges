#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

string intToBinaryString( int n ){

    if( n == 0 )
        return "0";

    string res = "";
    while( n ){
        res += '0' + n%2;
        n /= 2;
    }

    reverse( res.begin(), res.end() );

    return res;
}

int main(){

    int n;
    cin >> n;
    string s = intToBinaryString( n );

    int res = 0;
    int start = 0;
    for( int i = start + 1 ; i <= s.size() ; ){
        if( i == s.size() || s[i] != s[start] ){
            if( s[start] == '1' ){
                res = max( res, i - start );
            }
            start = i;
            i = start + 1;
        }
        else
            i ++;
    }
    cout<<res<<endl;

    return 0;
}
