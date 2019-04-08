int main()
{
	const int maxlen=250;
	unsigned an1[maxlen];unsigned an2[maxlen];
	char seline1[maxlen+1];char seline2[maxlen+1];
	cin.getline(seline1,maxlen+1);
	cin.getline(seline2,maxlen+1);
	int nlen1=strlen(seline1);
	int nlen2=strlen(seline2);
	memset(an1,0,sizeof(an1));
	memset(an2,0,sizeof(an2));
	int i,j=0;
	for(i=nlen1-1;i>=0;i--)
	{
		an1[j++]=seline1[i]-'0';
	}
	j=0;
	for(i=nlen2-1;i>=0;i--)
	{
		an2[j++]=seline2[i]-'0';
	}
	for(i=0;i<maxlen;i++)
	{
		an1[i]+=an2[i];
		if(an1[i]>=10)
		{
			an1[i]-=10;
			an1[i+1]++;
		}
	}
	i=maxlen-1;
	if(strlen(seline1)==1&&seline1[0]=='0'&&strlen(seline2)==1&&seline2[0]=='0')
	{
		cout<<0;
	}
	else
	{
		while(an1[i]==0)
		{
			i--;
		}
	    for(;i>=0;i--)
		{
		    cout<<an1[i];
		}
	}
	cout<<endl;
	return 0;
}