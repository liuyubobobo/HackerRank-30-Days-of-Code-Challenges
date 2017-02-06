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

using namespace std;

int glassSum( int i, int j, const vector<vector<int>> &arr){

    int res = 0;
    for( int k = 0 ; k < 3 ; k ++ ){
        res += arr[i][j+k];
        res += arr[i+2][j+k];
    }
    res += arr[i+1][j+1];
    return res;
}

int main(){

    vector< vector<int> > arr(6,vector<int>(6));

    for( int i = 0 ; i < 6 ; i ++ ){
       for( int j = 0 ; j < 6 ; j ++ ){
          cin >> arr[i][j];
       }
    }

    int res = -9*16-1;
    for( int i = 0 ; i <= 3 ; i ++ )
        for( int j = 0 ; j <= 3 ; j ++ )
            res = max( res , glassSum( i , j , arr ) );
    cout<<res<<endl;

    return 0;
}
