void main()
{
	void CONVERT(char c[100],char d[100],char B,int N,int x);
	int m,n,l,i,j,k[100],t;
	char s[100],a[100],b[100];
	gets(s);
	gets(a);
	gets(b);
	m=strlen(s);
	n=strlen(a);
	l=strlen(b);
	for(i=0;i<m;i++)
	{
		k[i]=0;
	}
	for(i=0;i<m;i++)
	{
		t=k[i];
		for(j=i;j<i+n;j++)
		{
			if(s[j]==a[j-i])
			{
				k[i]=1;
			}
			else
			{
				k[i]=t;
				break;
			}
		}
		if((s[i-1]!=' ')&&(i!=0))
			k[i]=t;
		if(k[i]==1)
			for(j=i+1;j<i+n;j++)
			{
				k[j]=2;
			}
	}

	for(i=0;i<m;i++)
	{
		if(k[i]==1)
		{
			for(j=0;j<l;j++)
			{
				printf("%c",b[j]);
			}
		}
		if(k[i]==0)
		{
			printf("%c",s[i]);
		}
	}
	
}
