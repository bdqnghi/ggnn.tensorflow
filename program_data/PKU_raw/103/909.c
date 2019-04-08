int main()
{
	char a[1100];
	cin>>a;
	char c[1100];
	int n,p=0;
	int b[1100];
	n=strlen(a);
	for(int i=0;i<n;i++)
		b[i]=1;
	for(int i=0;i<n;i++)
	{
		if(a[i]-'a'>=0)
			a[i]=a[i]-32;
	}
	for(int i=1;i<n;i++)
	{
		if(a[i]==a[i-1])
		{b[p]++;c[p]=a[i];}
		else
		{p++;c[p]=a[i];}
	}
	c[0]=a[0];
	for(int j=0;j<=p;j++)
		cout<<"("<<c[j]<<","<<b[j]<<")";
	return 0;
}