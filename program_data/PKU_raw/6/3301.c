int main()
{
    int c[101][101];
	int n,i,j,s,t;
	cin>>n;
	while(n--)
	{
		cin>>s>>t;
		for(i=0;i<s;i++)
			for(j=0;j<t;j++)
				cin>>c[i][j];
			int sum=0;
			if(s==1)
				for(i=0;i<t;i++)
					sum=sum+c[0][t];
			else if(t==1)
				for(i=0;i<s;i++)
					sum=sum+c[i][0];
			else
			{
				for(i=0;i<t;i++)
					sum=sum+c[0][i]+c[s-1][i];
				for(i=1;i<s-1;i++)
					sum=sum+c[i][0]+c[i][t-1];
			}
			cout<<sum<<endl;
	}
	return 0;
}