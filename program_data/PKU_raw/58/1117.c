int main()
{
	char str[100][100]={' '};
	int n,i,j,flag1=0,flag2=0,len[100];
	cin>>n;
	cin.get();
	for(i=0;i<n;i++)
	{
		cin.getline(str[i],100);
		len[i]=strlen(str[i]);
	}
	for(i=0;i<n;i++)
	{
		flag1=0;flag2=0;
		if((str[i][0]=='_')||('a'<=str[i][0]&&str[i][0]<='z'||'A'<=str[i][0]&&str[i][0]<='Z'))
		{flag1=1;}
		for(j=0;j<len[i];j++)
		{
			flag2=0;
			if((str[i][j]=='_')||(str[i][j]>='0'&&str[i][j]<='9')||(('a'<=str[i][j]&&str[i][j]<='z')||('A'<=str[i][j]&&str[i][j]<='Z')))
			flag2=1;
			if(flag2==0)
				break;
	
		}
		if(flag1+flag2==2)
			cout<<1<<endl;
		else
			cout<<0<<endl;
	}

   return 0;
}

	                                 



