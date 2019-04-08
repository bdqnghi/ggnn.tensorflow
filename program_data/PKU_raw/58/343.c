int main()
{
	char word[100][100];
	int i=0,j=0,len[100],n,judge[100]={0};
	cin>>n;
	cin.get();
	for(i=0;i<n;i++)
	{
		cin.getline(word[i],100,'\n');
	}
	for(i=0;i<n;i++)
	{
		j=0;
		while(word[i][j]!='\0')
		{
			j++;
		}
		len[i]=j;
	}
	for(i=0;i<n;i++)
	{
		if((word[i][0]>='a'&&word[i][0]<='z' || word[i][0]>='A'&&word[i][0]<='Z') || word[i][0]=='_')
		{
			judge[i]=1;
		    for(j=1;j<len[i];j++)
			{
				if((word[i][j]<'0' || (word[i][j]>'9'&&word[i][j]<'A') || (word[i][j]>'Z'&&word[i][j]<'a') || word[i][j]>'z') && word[i][j]!='_')
				{
					judge[i]=0;
				}	
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<judge[i]<<endl;
	}
	return 0;
}