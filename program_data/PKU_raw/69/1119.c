int main()
{
	unsigned a1[260],a2[260];
	char l1[260],l2[260];
	gets(l1);
	cin.getline(l2,260);
	int len1=strlen(l1);
	int len2=strlen(l2);
	memset(a1,0,sizeof(a1));
	memset(a2,0,sizeof(a2));
	int i,j=0;
	for(i=len1-1;i>=0;i--)
		a1[j++]=l1[i]-'0';
	j=0;
	for(i=len2-1;i>=0;i--)
		a2[j++]=l2[i]-'0';
	int max=(len1>len2?len1:len2);
	for(int i=0;i<max;i++)
	{
		a1[i]+=a2[i];
		if(a1[i]>9)
		{
			a1[i]-=10;
			a1[i+1]++;
		}
	}
	i=max;
	while(a1[i]==0&&i>0)i--;
	if(i==0) cout<<0;
	else
	{
		for(;i>=0;i--)
			cout<<a1[i];
	}
	return 0;
}