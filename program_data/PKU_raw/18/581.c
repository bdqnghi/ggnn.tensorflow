int main()
{
	int n,i,a[101][101]={0},j,k,sum=0,min[101]={0},l,min1[101]={0};
	cin>>n;
	l=n;
	for (k=1;k<=l;k++)
	{
		
		for (i=1;i<=l;i++)
		{
			for(j=1;j<=l;j++)
			{
				cin>>a[i][j];
				
			}
		}
		 n=l;
	
	   while(n>1)
	   {
		 
		  for (i=1;i<=n;i++)
		  {
			min[i]=a[i][1];
			for(j=1;j<=n;j++)
			{
				if(min[i]>a[i][j])
					min[i]=a[i][j];
				
			}
		  }
		
		for (i=1;i<=n;i++)
		{
		
			for(j=1;j<=n;j++)
			{
				a[i][j]=a[i][j]-min[i];
				
			}
		}
		  for (j=1;j<=n;j++)
		  {
			  min1[j]=a[1][j];
			  for (i=1;i<=n;i++)
			  {
				  if (min1[j]>a[i][j])
					  min1[j]=a[i][j];
			  }
		  }
		  for (j=1;j<=n;j++)
		  {
			  for(i=1;i<=n;i++)
			  {
				  a[i][j]=a[i][j]-min1[j];
			  }
		  }


		
		
		sum=sum+a[2][2];
		for (j=2;j<n;j++)
		{
			a[1][j]=a[1][j+1];
		}
		for (i=2;i<n;i++)
		{
			a[i][1]=a[i+1][1];
		}
		for (i=2;i<n;i++)
		{
			for(j=2;j<n;j++)
			{
				a[i][j]=a[i+1][j+1];
			}
		}
		n--;
	   }
	   cout<<sum<<endl;
	   sum=0;
	   
	}

	return 0;
}

	
	



		
