int main()
{   
	int a[100][100];
	int i,j,k,m,n;
	cin>>k;
	for(int p=0;p<k;p++)	
	{
        int sum=0,sum1=0,sum2=0,sum3=0,sum4=0;
		 cin>>m>>n;
         for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>a[i][j];
			}
		}
		if(n==1&&m!=1)
		{  
			for(i=0;i<m;i++)
			{
			    sum=sum+a[i][0];
			}
			cout<<sum<<endl;
		}
	  else if(m==1&&n!=1)
	  {
		    for(i=0;i<n;i++)
			{
			 sum=sum+a[0][i];
			}
		    cout<<sum<<endl;
	  }
	    else if(m==1&&n==1)
		{
			cout<<a[0][0]<<endl;
		}
	else
	{
		
		for(i=0;i<n;i++)
		{
			sum1=sum1+a[0][i];
			sum2=sum2+a[m-1][i];
		}  
		 for(i=0;i<m;i++)
		 {
			sum3=sum3+a[i][0];
			sum4=sum4+a[i][n-1];
		}
		 sum=sum1+sum2+sum3+sum4-(a[0][0]+a[0][n-1]+a[m-1][0]+a[m-1][n-1]);
		 cout<<sum<<endl;
		}
	}
	 return 0;
}