/*
 * 20121024-4.cpp
 *
 *  Created on: 2012-10-26
 *      Author: ???
 */



int main(){
	int n,count,number,i;
	cin>>n;
	count=0;
	int a[n],b[n],c[n];
	c[n]=0;
	for(i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
		if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90)
		{
			count=count+1;//????????????????
			c[i]=count;//???????
		}
		else
		{
			count=0;
			c[i]=count;//???????0
		}
	}
	number=0;
	for(i=1;i<=n;i++)
	{
		if(c[i]>number) number=c[i];//???????????
	}
	cout<<number;
	return 0;
}
