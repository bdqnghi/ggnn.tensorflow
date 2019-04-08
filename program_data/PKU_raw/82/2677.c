int main()
{
	int a[100],b[100],c[100],n,s=0,i,j=0,m=0;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	memset(c,0,sizeof(c));
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
		if((a[i]>=90)&&(a[i]<=140)&&(b[i]>=60)&&(b[i]<=90))
			c[j]++;
		else
			j++;
	}
	for(j=0;j<=n;j++)
	{
		m=(m>c[j])?m:c[j];
	}
	cout<<m<<endl;
	return 0;
}



