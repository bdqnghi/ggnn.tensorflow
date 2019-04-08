int main()
{
	int n,a[100][100],N,i,j,k,l,min,sum=0;
	cin>>N;//N???
	for(i=0;i<N;i++)//N???
	{
		for(j=0;j<N;j++)
			for(k=0;k<N;k++)
				cin>>a[j][k];//????
			n=N;
			for(l=0;l<N-1;l++)
		{
			for(j=0;j<n;j++)
			{
				min=a[j][0];
				for(k=0;k<n;k++)
				{
					if (a[j][k]<min)
						min=a[j][k];
				}
				for(k=0;k<n;k++)
					a[j][k]=a[j][k]-min;
			}//????
			for(k=0;k<n;k++)
			{
				min=a[0][k];
				for(j=0;j<n;j++)
				{
					if (a[j][k]<min)
						min=a[j][k];
				}
				for(j=0;j<n;j++)
					a[j][k]=a[j][k]-min;
			}//????
			sum=sum+a[1][1];//??
			for(k=1;k<n-1;k++)
				for(j=0;j<n;j++)
					a[j][k]=a[j][k+1];//?????
				for(j=1;j<n-1;j++)
					for(k=0;k<n-1;k++)
						a[j][k]=a[j+1][k];//?????
					n=n-1;//????????
			}
			cout<<sum<<endl;//??
			sum=0;

	}
	return 0;
}

