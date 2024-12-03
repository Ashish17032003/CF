//
// Created by Ashish Shankar on 22/09/24.
//

#include<iostream>
#include<string>
#include<vector>
#include<utility>
#include<limits.h>
#include<cmath>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    long long a;
    cin>>a;
    long long min = 2*(a+1);
    for(long long i=sqrt(a); i>0; i--){
        long long p = 2*(i+a/i);
        if(a%i==0 && p<min){
            min=p;
            break;
        }
    }

    cout<<min<<endl;
    return 0;

}
