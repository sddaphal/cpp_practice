#include <bits/stdc++.h>
using namespace std;
int main(){

	int x = 10;
	cout<<&x<<endl;

	char ch = 'C';
	cout<<(void *)&ch<<endl;

	int *xptr = &x;
	char *chptr = &ch;

	cout<<sizeof(xptr)<<endl;
	cout<<sizeof(chptr)<<endl;

	return 0;
} 