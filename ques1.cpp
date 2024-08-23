// Print an increasing-decreasing sequence using recursion

//  Example:

//  If n = 5, the output should be: 1 2 3 4 5 4 3 3 1
#include<iostream>
#include<string>
using namespace std;
void print_increasing(int n){
    if(n==0) return;
    print_increasing(n-1);
    cout<<n<<" ";
}
void print_decreasing(int n){
    if(n==0) return;
    cout<<n<<" ";
    print_decreasing(n-1);
}
void increasing_decreasing(int index,int n){
    if(n==0) return;
    print_increasing(n);
    print_decreasing(n-1);
}
int main(){
    int n = 5;
    increasing_decreasing(0,n);
}