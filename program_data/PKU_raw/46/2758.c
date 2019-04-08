int main()
{
	int a[101][101],i,j,k=0,l=1,m,n,c,d;//???????
	cin>>m>>n;//?????????
	c=m,d=n;//?m,n????c,d
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
			cin>>a[i][j];//??????
	j=0;//?j=0
	while(j<c*d)//?j<c*d?
	{
		for(i=l;i<=n;i++)
		{
			if(j>=c*d)break;//??j>=c*d,????
			cout<<a[k+1][i]<<endl;//??a[k+1][i]
			j=j+1;//j=j+1
			
		}
		for(k=i-1,i=l+1;i<=m;i++)
		{
			if(j>=c*d)break;//??j>=c*d,????
			cout<<a[i][k]<<endl;//??a[i][k]
			j=j+1;//j=j+1
			
		}
		for(k=i-1,i=n-1;i>=l;i--)
		{
			if(j>=c*d)break;//??j>=c*d,????
			cout<<a[k][i]<<endl;//??a[k][i]
			j=j+1;//j=j+1
			
		}
		for(k=i+1,i=m-1;i>=l+1;i--)
		{
			if(j>=c*d)break;//??j>=c*d,????
			cout<<a[i][k]<<endl;//??a[i][k]
			j=j+1;//j=j+1
			
		}
		n=n-1;m=m-1;l=l+1;
	}
	return 0;
}