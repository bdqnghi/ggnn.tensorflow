int main ()
{
	int n,i,j,m,t,g,max;
	char q;
	int d[26];
	struct
	{
		int a;
		char b[26];

	}s[999];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%s",&s[i].a,s[i].b);
	}
	for(i=0;i<26;i++)
	{
		d[i]=0;
	}
	for(i=0;i<n;i++)
	{
		m=strlen(s[i].b);
		for(j=0;j<m;j++)
		{
			t=s[i].b[j]-'A';
			d[t]++;
		}
	}
	max=0;
	for(j=0;j<25;j++)
	{
		if(d[j]>max)
		{
			max=d[j];
			g=j;
		}
	}
	q='A'+g;
	printf("%c\n%d\n",q,max);

	for(i=0;i<n;i++)
	{
		m=strlen(s[i].b);
		for(j=0;j<m;j++)
		{
			if(s[i].b[j]-'A'==g)
			{
				printf("%d\n",s[i].a);
			}
		}
	}



		return 0;

}
