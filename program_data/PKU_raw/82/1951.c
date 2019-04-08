int main()
{
	int n,a[100],b[100],c[100]={0},t,p,q;
	cin>>n;
	if (n==1)
	{	cin>>p>>q;
	if (p<=140 && p>=90 && q>=60 &&q<=90)
		cout<<"1"<<endl;
	else cout<<"0"<<endl;
	}
	else 
	{
	for (int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
	}
	for (int j=1;j<=n;j++)
	{
		if (a[j-1]<=140 && a[j-1]>=90 && b[j-1]>=60 &&b[j-1]<=90)
			c[j]=c[j-1]+1;
	}
	for (int k=0;k<n;k++)
	{
		if (c[k+1]<c[k])
		{t=c[k+1];c[k+1]=c[k];c[k]=t;}
	}
    cout<<c[n]<<endl;
	return 0;
}
}

	