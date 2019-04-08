int main()
{
	int n,k,a[100][100],b[10000],min=0;
	cin>>n;
	k=n;
	while(k>0)
	{
		memset(a,0,sizeof(a));
		int i,j,k1,sum=0;
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				cin>>a[i][j];
		k1=n;
		while(k1>1)
		{
			for(i=0;i<k1;i++)
			{
				min=a[i][0];
				for(j=0;j<k1;j++)//?????????
					if(a[i][j]<min)
						min=a[i][j];
				for(j=0;j<k1;j++)
					a[i][j]=a[i][j]-min;
			}
			for(i=0;i<k1;i++)
			{
				min=a[0][i];
				for(j=0;j<k1;j++)
					if(a[j][i]<min)
						min=a[j][i];
				for(j=0;j<k1;j++)
					a[j][i]=a[j][i]-min;
			}
			sum=sum+a[1][1];
			int count=0;
			memset(b,0,sizeof(b));
			for(i=0;i<k1;i++)
			{
				if(i==1)continue;
				for(j=0;j<k1;j++)
				{
					if(j==1)continue;
					b[count++]=a[i][j];
				}
			}
			k1--;
			memset(a,0,sizeof(a));
			int x=0;
			for(i=0;i<k1;i++)
				for(j=0;j<k1;j++)
					a[i][j]=b[x++];
		}
		cout<<sum<<endl;
		sum=0;
		k--;
	}
	return 0;
}