#include<stdlib.h>
#include<stdio.h>
#include<iostream>
using namespace std;

const int sum=10, iloczyn=5;
double WYNIK[2*(sum+iloczyn)];

int main()
{
	WYNIK[0]=1;
	WYNIK[1]=1;
	for(int i=2;i<2*(sum+iloczyn);i++)
	WYNIK[i]=WYNIK[i-1]+WYNIK[i-2];
	
	for(int i=0;i<(2*(sum+iloczyn));i++)
	cout<<"tab["<<i<<"] = "<<WYNIK[i]<<endl;
	cin>>WYNIK[1];
}
