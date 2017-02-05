#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {

    double mealCost;
    int tipPercent, taxPercent;

    cin >> mealCost >> tipPercent >> taxPercent;

    double extraRate = ( tipPercent + taxPercent ) / 100.0;

    int res = (int)( mealCost * ( 1.0 + extraRate ) + 0.5 );
    
    cout << "The total meal cost is " << res << " dollars." << endl;

    return 0;
}
