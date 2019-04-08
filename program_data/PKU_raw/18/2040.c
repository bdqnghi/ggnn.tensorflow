int main()
{
	int n,i,j,min,s,t;
	cin>>n;
	int a[n][n];
	for(int k=0;k<n;k++)
	{
		s=0;
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				cin>>a[i][j];
		for(t=n;t>1;t--)
		{
		for(i=0;i<t;i++)
			{
			min=a[i][0];
			for(j=1;j<t;j++)
				if(a[i][j]<min)
					min=a[i][j];
			for(j=0;j<t;j++)
				a[i][j]-=min;
			}
		for(i=0;i<t;i++)
			{
			min=a[0][i];
			for(j=1;j<t;j++)
				if(a[j][i]<min)
					min=a[j][i];
			for(j=0;j<t;j++)
				a[j][i]-=min;
			}
		s+=a[1][1];
		if(t>2){
		for(i=1;i<t-1;i++)
			{
			a[0][i]=a[0][i+1],a[i][0]=a[i+1][0];
			}
		for(i=1;i<t-1;i++)
			for(j=1;j<t-1;j++)
				a[i][j]=a[i+1][j+1];
			}}
		cout<<s<<endl;
	}
	return 0;
}