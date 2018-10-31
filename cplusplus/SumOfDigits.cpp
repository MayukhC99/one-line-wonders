#include<iostream>
using namespace std;

long int sumdigits(long int no) { return no == 0 ? 0 : no%10 + sumdigits(no/10) ; }//One-Line-Wonder Function
main(){long int n;
cin>>n,cout<<"Sum of Digits = "<<sumdigits(n);}
