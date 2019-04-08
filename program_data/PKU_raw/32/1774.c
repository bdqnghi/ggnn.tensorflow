int main()
{
	char seline1[100][100],seline2[100][100];
	int n;
	cin>>n;
	cin.get();
	for(int k=0;k<n-1;k++)
	{
		cin.getline(seline1[k],100);
		cin.getline(seline2[k],100);
		cin.get();
	}
	    cin.getline(seline1[n-1],100);
		cin.getline(seline2[n-1],100);
	for(int k=0;k<n;k++)
	{
		int l1=strlen(seline1[k]),an1[100],an2[100];
		int l2=strlen(seline2[k]);
		memset(an1, 0, sizeof(an1));
	    memset(an2, 0,sizeof(an2));
		for(int i=0;i<l1;i++)
			an1[i]=seline1[k][l1-i-1]-'0';//???????????????
		for(int i=0;i<l2;i++)
			an2[i]=seline2[k][l2-i-1]-'0';
		for(int j=0;j<l1;j++)
		{
			if(an1[j]>=an2[j])
				an1[j]-=an2[j];
			else
			{
				an1[j+1]--;
				an1[j]=an1[j]+10-an2[j];
			}
		}
		int t=99;
		while(an1[t]==0) t--;
		for(;t>=0;t--)
			cout<<an1[t];
		cout<<endl;
	}
		return 0;
	}