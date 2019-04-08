int main()
{
	char a[1010];
	cin>>a;
	int l,m=1,A=0;
	l=strlen(a);
	struct
	{
		char c;
		int d;
	}b[27];
	for(int i=0;i<l;i++)
	{
		if(a[i]>=97)
			a[i]-=32;
	}
	b[1].c=a[0],b[1].d=1;
	for(int i=1;i<l;i++)
	{
		if(a[i]==a[i-1])
			b[m].d++;
		else
		{
			b[++m].c=a[i];
			b[m].d=1;
		}
	}
	for(int i=1;i<=m;i++)
		cout<<"("<<b[i].c<<","<<b[i].d<<")";
	return 0;
}