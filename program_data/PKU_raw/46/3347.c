int main()
{
	int n,m,a[1000][1000],i,j,s,q=0;
	cin>>n>>m;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			cin>>a[i][j];
	int flag=0;
	for(i=0;;i++)
	{
		for(j=q;j<m-q;j++)
		{
			flag++;
			cout<<endl<<a[i][j];
		}
		if(flag==n*m)
			break;
		j--;
		for(s=i+1;s<n-q;s++)
		{
			flag++;
			cout<<endl<<a[s][j];
		}
		if(flag==n*m)
			break;
		s--;
		for(j=j-1;j>=q;j--)
		{
			flag++;
			cout<<endl<<a[s][j];
		}
		if(flag==n*m)
			break;
		j++;
		for(s=s-1;s>q;s--)
		{
			flag++;
			cout<<endl<<a[s][j];
		}
		if(flag==n*m)
			break;
		q++;
	}
	return 0;
}
