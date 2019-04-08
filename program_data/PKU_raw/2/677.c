//????????????
//???2013.12.21
//****************************
int main()
{
	int n=0,i=0,j=0,num[100],k=0,count[26]={0},max=0;
	char nam[100][30]={NULL};
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>num[i];
		cin.get();
		gets(nam[i]);
		for(j=0;j<strlen(nam[i]);j++)
			count[nam[i][j]-'A']++;
	}
	max=count[0];
	for(i=0;i<26;i++)
	{
		if(max<count[i])
		{    max=count[i];k=i;   }
		else
			continue;
	}
	j=0;
	cout<<(char)(k+'A')<<endl;
	cout<<max<<endl;
	for(i=0;i<n;i++)
		for(j=0;;j++)
		{
			if(nam[i][j]==k+'A')
			{	cout<<num[i]<<endl;break;   }
			if(nam[i][j]==NULL)
				break;
		}

	return 0;
}