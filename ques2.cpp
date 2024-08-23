// Write a program to print the sum of all odd numbers from a to b (inclusive) using recursion
#include<iostream>
using namespace std;
int sum_of_odd(int a, int b,int sum){
    if(a>b) return sum;
    if(a%2 == 0) sum_of_odd(a+1,b,sum);
    else sum_of_odd(a+1,b,sum+a);

}
int main(){
    int x = 4;
    int y = 10;
    int sum = 0;    
    cout<<sum_of_odd(x,y,0);
}