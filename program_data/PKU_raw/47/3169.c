//============================================================================
// Name        : shuzunixu.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


int main() {
	int n,middle=0;
	int a[101];
	int *p=NULL,*q=NULL;


	cin>>n;

		for(p=a;p<a+n;p++)
		cin>>*p;

	for(p=a,q=a+n-1;p<q;p++,q--)
	{ middle=*p;
	  *p=*q;
	  *q=middle;

	}
	for(p=a;p<a+n;p++)
		{if(p<a+n-1)cout<<*p<<' ';
		else cout<<*p;

		}

	return 0;
}
