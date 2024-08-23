// There are n stairs, and a person standing at the bottom wants to climb the stairs to
// reach the nth stairs.The person can climb either 1, 2, or 3 stairs at a time. Write a
// program to count the number o" ways the person can reach the top using recursion.
#include<iostream>
using namespace std;
int ways(int n){
    if(n== 2) return 2;
    if(n== 1) return 1;
    if(n== 3) return 4;
    int total_ways = ways(n-1)+ways(n-2)+ways(n-3);
    return total_ways;
}
int main(){
    int n = 5;
    cout<<ways(n);
}