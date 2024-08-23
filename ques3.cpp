// Given a positive integer, return true if it is a power of 2 using recursion.
#include<iostream>
using namespace std;
bool power_of_2(int n){
    if(n==1) return true;
    if(n%2 != 0 || n==0) return false;
    return power_of_2(n/2);
}
int main()
{
    int n = 8;
    cout<<power_of_2(n);
}