int main()
{
	int t,i,j,A,k,yes=0,m;
	scanf("%d",&t);
	char a[100000];
	char b[26];
	int c[26];
	for(i=0;i<26;i++)
	{
		b[i]='a'+i;
		c[i]=0;
	}
	for(i=0;i<t;i++)
	{
		scanf("%s",a);
		A=strlen(a);
		m=A;
		for(j=0;j<A;j++)
		{
			for(k=0;k<26;k++)
			{
				if(a[j]==b[k]) c[k]=c[k]+1;
			}
		}
		for(k=0;k<26;k++)
		{
			if(c[k]==1)
			{
				yes=1;
				for(j=0;j<A;j++)
				{
					if(a[j]==b[k])
					{
						if(j<m) m=j;
						break;
					}
				}
			}	
		}
		if(yes==1) printf("%c\n",a[m]);
		if(yes==0) printf("no\n");
		for(j=0;j<A;j++)
		{
			a[j]=0;
		}
		yes=0;
		for(j=0;j<26;j++)
		{
			c[j]=0;
		}
	}
	
}