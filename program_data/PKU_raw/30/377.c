/*
 * 1000012795-zhong-5.cpp
 *
 *  Created on: 2010-11-17
 *      Author: Administrator
 */
int main()
{
	int a[17]={17,27,37,47,57,67,71,72,73,74,75,76,78,79,87,97};
	int b[14]={7,14,21,28,35,42,49,56,63,70,77,84,91,98};
	int n,i,j,sum,num,he,wuguan;
	sum=0,num=0,he=0,wuguan=0;
	cin>>n;
	for(i=0;i<17;i++)
		if(a[i]<=n)
			sum=a[i]*a[i]+sum;
	for(j=0;j<14;j++)
		if(b[j]<=n)
			num=num+b[j]*b[j];
	he=num+sum;
	wuguan=(n*(n+1)*(2*n+1))/6;
	wuguan=wuguan-he;
	cout<<wuguan;
	return 0;
}
