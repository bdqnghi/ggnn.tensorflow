int main()
{
	char s[256],a[256],b[256],c[256];
	int i,j,m,n,k,t,q=0,p=0;
	gets(s);
	gets(a);
	gets(b);
	m=strlen(s);
	n=strlen(a);
	k=strlen(b);
	for(i=0;i<=m-n;i++)
	{
		for(j=i;j<i+n;j++)
		{
			if(s[j]==a[j-i])
				p++;
			else
				break;
		}
		if(p==n)
		{
			q++;
			t=i;
			for(j=0;j<=t-1;j++)
				c[j]=s[j];
			for(j=t;j<t+k;j++)
				c[j]=b[j-i];
			for(j=t+k;j<m-n+k;j++)
				c[j]=s[n+j-k];
			c[m-n+k]='\0';
			puts(c);
			break;
		}
		p=0;
	}
	if(q==0)
		puts(s);
	return 0;
}

