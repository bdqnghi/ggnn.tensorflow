int a[30];
int len[30];
int main()
{
	int n;
	cin>>n;
	int i,j;
	for(i=1;i<=n;i++)
	{
      cin>>a[n-i+1];
	  len[i] = 1;
	}
    for(i=2;i<=n;i++)
		for(j=1;j<i;j++)
		{
			if(a[j]<=a[i]&&(len[j]+1>len[i]))
				len[i] = len[j] + 1;
		}
	int maxx=0;
	for(i=1;i<=n;i++)
	{
		if(len[i]>maxx)
			maxx= len[i];
	}
	cout<<maxx<<endl;
	return 0;
}