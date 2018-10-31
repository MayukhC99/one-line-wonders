#include<iostream>
using namespace std;
long int factorial(long int n){return ((n==1) || (n==0)) ? 1: n * factorial(n - 1); }//One-Line-Wonder Function

main(){long int n;
cin>>n,cout<<"The Factorial is = "<<factorial(n);}
