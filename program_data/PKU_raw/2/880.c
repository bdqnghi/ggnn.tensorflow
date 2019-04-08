int main()
{
	char a[1000][27],x;
	int m,i,j,k,b[1000],c[26]={0},max=0;
	cin>>m;
	for(i=0;i<m;i++)
	{
		cin>>b[i]>>a[i];
		int len=strlen(a[i]);
		for(j=0;j<len;j++)
			c[a[i][j]-'A']++;
	}
	for(j=0;j<26;j++)
		if(max<c[j])
		{
			max=c[j];
		    x='A'+j;
		}

	cout<<x<<endl;
	cout<<max<<endl;
    for(i=0;i<m;i++)
	{
		int len=strlen(a[i]);
		for(k=0;k<len;k++)
			if(a[i][k]==x)
			{
				cout<<b[i]<<endl;
				break;
			}
	}

return 0;
}
