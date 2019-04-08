int main()
{
	int a1[100], a2[100];
	char b1[101],b2[101];
	int n;
	cin>>n;
	for(int k=0;k<n;k++)
	{
		cin>>b1>>b2;
		int l1=strlen(b1),l2=strlen(b2);
		memset(a1,0,sizeof(a1));
		memset(a2,0,sizeof(a2));
		int j=0;
		for(int i=l1-1;i>=0;i--)
		{
			a1[j++]=b1[i]-'0';
		}
		j=0;
		for(int i=l2-1;i>=0;i--)
		{
			a2[j++]=b2[i]-'0';
		}
		for(int i=0;i<100;i++)
		{
			if(a1[i]<a2[i])
			{
				a1[i]=10+a1[i]-a2[i];
				a1[i+1]--;
			}
			else
			{
				a1[i]=a1[i]-a2[i];
			}}
		int i=99;
		while(a1[i]==0) i--;
		for(;i>=0;i--)
		{cout<<a1[i];}
			cout<<endl;
		}
	return 0;
}