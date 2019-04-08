/*
 * 111.cpp
 *
 *  Created on: 2010-11-13
 *      Author: dell
 *      ????7???????
 */


int main(){
	int i;
	int a[10000],b[10000],n,m=0;
	cin>>n;
	for(i=1;i<n+1;i++){
		a[i]=i;
		b[i]=i*i;
	}
	for(i=1;i<n+1;i++){
		if(a[i]%7==0||a[i]==17||a[i]==27||a[i]==37||a[i]==47||a[i]==57
			||a[i]==67||a[i]==87||a[i]==97||(a[i]-70<=9&&a[i]-70>=0))continue;
		else
			m=m+b[i];
	}
	cout<<m<<endl;
	    return 0;
}