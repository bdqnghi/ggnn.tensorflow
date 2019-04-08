int main()
{
	int n,i,j,k=1;
	int b[200]={1},c[200]={0};
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=k;j++)
			c[j]=0;
		for(j=0;j<k;j++)
		{
			c[j]+=2*b[j];
			c[j+1]+=c[j]/10;
			c[j]=c[j]%10;
		}
		if(c[k])
			k++;
		for(j=0;j<k;j++)
			b[j]=c[j];
	}
	for(i=k-1;i>=0;i--)
		cout<<b[i];
	cout<<endl;
	return 0;
}
