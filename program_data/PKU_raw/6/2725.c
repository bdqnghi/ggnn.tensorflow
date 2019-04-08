int main()
{
	int a[101][101];
	int k,m,n,sum,i,j,l;
	cin>>k;
	for(i=0;i<k;i++)
	{sum=0;
	cin>>m>>n;
	for(j=0;j<m;j++)
		for(l=0;l<n;l++)
		{cin>>*(*(a+j)+l);
		if((j==0)||(l==0)||(j==(m-1))||(l==(n-1)))
			sum+=*(*(a+j)+l);
		}
	cout<<sum<<endl;
	}
	return 0;
}
