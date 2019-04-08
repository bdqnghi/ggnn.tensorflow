int m,n,a[100],b[100],c[200];
int order(int str[],int po,int start)
{
	for(int i=1;i<po;i++)
	{
		for(int j=1;j<=po-i;j++)
		{
			if(str[j]>str[j+1]) swap(str[j],str[j+1]);
		}
	}
	for(int i=start;i<po+start;i++)
		{
			c[i]=str[i-start+1];
	}
	return 0;
}
int output()
{
	order(a,m,1);
	order(b,n,m+1);
	for(int i=1;i<m+n;i++) cout<<c[i]<<" ";
	cout<<c[m+n];
	return 0;
}
int main()
{
	cin>>m>>n;
	for(int i=1;i<=m;i++) cin>>a[i];
	for(int j=1;j<=n;j++) cin>>b[j];
	output();
	return 0;
}