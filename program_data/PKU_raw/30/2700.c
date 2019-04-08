/*
 * pp15.cpp
 *
 *  Created on: 2010-11-17
 *      Author: d
 */

int main()
{
	int n,i,sum=0,sum1=0,sum2=0;
	cin>>n;
	int a[20]={0,7,17,27,37,47,57,67,70,71,72,73,74,75,76,77,78,79,87,97};
	for(i=1;i<20;i++)
		if(a[i]<=n)   sum1+=a[i]*a[i];
	for(i=1;i<=n;i++)
		if(i%7==0)  sum2+=i*i;
	for(i=1;i<=n;i++)
		sum+=i*i;
	if(n>=7&&n<77)
	cout<<sum-sum1-sum2+49;
	if(n<=7)
		cout<<sum;
	if(n>77)
		cout<<sum-sum1-sum2+7*7+70*70+77*77;

	return 0;
}
