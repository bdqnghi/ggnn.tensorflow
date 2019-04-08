int main()
{
	char a[550];
	int n=0;
	cin>>n;
	cin.get();
	cin.getline(a,550);
	int len=strlen(a);
	char *p=a,b[550][6]={0},c[550][6]={0};
	int num[550]={0};
	for(int i=0;i<=len-n;i++)
	{
		int j=0;
		for(;j<n;j++)
		{
			b[i][j]=a[j+i];
		}
		b[i][j]='\0';
		//cout<<b[i]<<endl;
	}
	for(int i=0;i<len-n;i++)
	{
		for(int j=i+1;j<=len-n;j++)
		{
			if(strcmp(b[i],b[j])==0)
				num[i]++;
		}
	}
	int max=0;
	for(int i=0;i<len-n;i++)
	{
		if(max<num[i])
			max=num[i];
	}
	if(max==0)cout<<"NO";
	else
	{
		cout<<max+1<<endl;
		for(int i=0;i<len-n;i++)
		{
			if(num[i]==max)
			{
				cout<<b[i]<<endl;
			}
		}
	}
	return 0;
}