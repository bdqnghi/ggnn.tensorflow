int main()
{
	int m,n,i,j,s;
	char str[256],c[256],d[256];
	gets(c);
	gets(str);
	gets(d);
	m=strlen(str);
	n=strlen(c);
	for(i=0;i<n-m+1;i++)
	{
		if(c[i]==str[0])
		{
			s=0;
			for(j=i;j<i+m;j++)
			{
				if(c[j]==str[j-i])
				{
					s=s+1;
				}
			}
			if(s==m)
			{
				break;
			}
		}
	}
	if(s==m)
	{
		for(j=i;j<i+m;j++)
		{
			c[j]=d[j-i];
		}
	}
	puts(c);
	return 0;
}
