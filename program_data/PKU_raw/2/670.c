int main()
{
	int n;
	cin>>n;
	int a[26],max,num[n],i,j,s;
	char maxname,name[n][10];
	memset(a,0,sizeof(a));
	for(i=0;i<n;i++)
	{
		cin>>num[i]>>name[i];
		s=strlen(name[i]);
		for(j=0;j<s;j++)
			a[name[i][j]-'A']++;
	}
	max=a[0],maxname='A';
	for(i=1;i<26;i++)
		if(a[i]>max)
		{
			max=a[i],maxname='A'+i;
		}
	cout<<maxname<<endl<<max<<endl;
	for(i=0;i<n;i++)
	{
		s=strlen(name[i]);
		for(j=0;j<s;j++)
			if(name[i][j]==maxname)
				cout<<num[i]<<endl;
	}
	return 0;
}