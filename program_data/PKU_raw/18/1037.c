int main()
{
	int n,q,i,j,min1[100],min2[100],a[100][100],d,w;
	cin>>n;w=n;
	for(q=0;q<w;q++)
	{
		
		d=0;n=w;
		for(i=0;i<w;i++)
		{
			for(j=0;j<w;j++)		
			{	cin>>a[i][j];
			}
		}while(n>=2){
			for(i=0;i<n;i++)min1[i]=1000;
			for(i=0;i<n;i++)min2[i]=1000;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(min1[i]>a[i][j])
				{
					min1[i]=a[i][j];//cout<<min1[i]<<endl;
				}
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				a[i][j]-=min1[i];
			}
		}
		for(j=0;j<n;j++)//
		{
			for(i=0;i<n;i++)
			{
				if(min2[j]>a[i][j])
				{
					min2[j]=a[i][j];//cout<<min2[j]<<endl;
				}
			}
		}
		for(j=0;j<n;j++)
		{
			for(i=0;i<n;i++)
			{
				a[i][j]-=min2[j];
			}
		}
		d+=a[1][1];
		for(j=0;j<n;j++)
		{
			for(i=2;i<n;i++)
			{
				a[i-1][j]=a[i][j];
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=2;j<n;j++)
			{
				a[i][j-1]=a[i][j];
			}
		}
		n--;
		}
		cout<<d<<endl;
	}



		



return 0;
}