/*
 * 1000012795-?????????.cpp
 *
 *  Created on: 2010-12-29
 *      Author: Administrator
 */
int a[1000][1000]={0};
int sum=0;
void cut(int n)
{
	int i,j,k;
	int min=10000;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{

		   if(min>a[i][j])
			   min=a[i][j];
		}
		for(k=0;k<n;k++)
			a[i][k]=a[i][k]-min;
		min=10000;
	}
	min=10000;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		    if(min>a[j][i])
				min=a[j][i];
		}
	    for(k=0;k<n;k++)
		    a[k][i]=a[k][i]-min;
	    min=10000;
	}
	sum=sum+a[1][1];
}
int main()
{
	int n,i,j,k,p;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<n;j++)
			for(k=0;k<n;k++)
				cin>>a[j][k];
		for(p=1;p<n;p++)
		{
		 cut(n-p+1);
		 for(j=1;j<n-p;j++)
		 	for(k=1;k<n-p;k++)
		 	{
		 		a[j][k]=a[j+1][k+1];
		 	}
		 for(k=1;k<(n-p);k++)
			 a[0][k]=a[0][k+1];
		 for(k=1;k<(n-p);k++)
			 a[k][0]=a[k+1][0];
		}
		cout<<sum<<endl;
		sum=0;
	}
	return 0;
}


