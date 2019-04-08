int main()
{
	int i,j,k,n,m,height[25],len[25],num[25];
	cin>>n;
	for(i=0;i<n;i++)
		cin>>height[i];
	for(i=0;i<n;i++)
		len[i]=0;
	for(i=n-1;i>=0;i--)
	{
		m=0;
		for(j=i+1;j<=n-1;j++)
			if(height[j]<=height[i])
			{
				num[m]=j;
				m++;
			}
		for(k=0;k<=m-1;k++)
			if(len[i]<len[num[k]])
				len[i]=len[num[k]];
			len[i]++;
	}
	m=0;
	for(i=0;i<n;i++)
		if(len[i]>m)
			m=len[i];
		cout<<m<<endl;
return 0;
}
