int main()
{
	int i,k,m,n,j,z,s;
	cin>>k;
	for(z=1;z<=k;z++)
	{
		s=0;
		cin>>m>>n;
			int a[100][100];
			for(i=0;i<m;i++)
					for(j=0;j<n;j++)
						cin>>a[i][j];
			if(m==1||n==1)
			{
				for(i=0;i<m;i++)
									for(j=0;j<n;j++)
										s=s+a[i][j];
			}
			else
		{for(i=0;i<n;i++)
			s=s+*(*a+i)+*(*(a+m-1)+i);
		for(i=1;i<m-1;i++)
			s=s+*(*(a+i))+*(*(a+i)+n-1);}
		cout<<s<<endl;
	}

}
