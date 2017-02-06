#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>

using namespace std;


int main() {

    int n;
    cin>>n;

    map<string,string> phonebook;
    string name, phone;
    for( int i = 0 ; i < n ; i ++ ){
        cin >> name >> phone;
        phonebook[name] = phone;
    }

    while( cin >> name ){

        if( phonebook.find(name) == phonebook.end() )
            cout<<"Not found"<<endl;
        else
            cout<<name<<"="<<phonebook[name]<<endl;
    }

    return 0;
}
