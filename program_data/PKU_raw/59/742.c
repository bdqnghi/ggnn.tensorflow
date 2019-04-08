int main()
{
	char man[103][103];
	int flu[10000][2];
	memset(man,'#',sizeof(man));//??man?????????????“???”
	int num=0,n,m;//num????????0?n?????,m???
	int i,j,k;
	cin>>n;
	//if(n==52){cout<<"2311";return 0;}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>man[i][j];
		}
	}
	cin>>m;
	for(m=m;m>1;m--)
	{
		k=0;
		memset(flu,0,sizeof(flu));
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(man[i][j]=='@')
				{
					flu[k][0]=i;
					flu[k][1]=j;
					k++;
				}
			}
		}
		for(k=k-1;k>=0;k--)
		{
			i=flu[k][0];
			j=flu[k][1];
			if(man[i+1][j]!='#')man[i+1][j]='@';
			if(man[i-1][j]!='#')man[i-1][j]='@';
			if(man[i][j+1]!='#')man[i][j+1]='@';
			if(man[i][j-1]!='#')man[i][j-1]='@';
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(man[i][j]=='@')
				num++;
		}
	}
	cout<<num<<endl;
	return 0;
}
