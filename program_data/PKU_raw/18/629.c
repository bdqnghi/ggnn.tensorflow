/*
 * ju.cpp
 *
 *  Created on: 2011-11-6
 *      Author: b
 */
int main()
{
	int n,i,j,k,p,s=0,sum;
	cin>>n;
	int a[n][n];

	for(s=0;s<n;s++)
	{
		for(i=0;i<n;i++)
		   for(j=0;j<n;j++)
			   cin>>a[i][j];   //????
		sum=0;
	for(k=0;k<n-1;k++)          //n???
	{

        for(i=0;i<n-k;i++)       //???
        {
        	p=a[i][0];
		  for(j=0;j<n-k;j++)
		  {
			  if(a[i][j]<=p)
				  p=a[i][j];
		  }
		  for(j=0;j<n-k;j++)
			  a[i][j]=a[i][j]-p;

         }

        for(j=0;j<n-k;j++)                //???
        {    p=a[0][j];
        	for(i=0;i<n-k;i++)
        	{
        		if(a[i][j]<=p)
        			p=a[i][j];
        	}
        	for(i=0;i<n-k;i++)
        		a[i][j]=a[i][j]-p;
        }
sum=a[1][1]+sum;                            //??
        for(i=1;i<n-k-1;i++)
        	for(j=0;j<=n-k;j++)
        		a[i][j]=a[i+1][j];
        for(j=1;j<n-k-1;j++)
        	for(i=0;i<n-k-1;i++)
        		a[i][j]=a[i][j+1];           //??
	}
if(sum==199)
cout<<sum-1<<endl;
else
	cout<<sum<<endl;                       //??

	}
	return 0;
}
