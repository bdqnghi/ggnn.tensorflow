int main()
{
	char s1[100];
	char a[100];
	char b[100];
	char s2[15][20];
	int i,k,x=0,m,n;
	char c,d;
	gets(s1);
	gets(a);
	gets(b);
	m=0;
	n=0;
	k=0;
	for(i=0;(c=s1[i])!='\0';i++)
	{
		if(c!=' ')
		{
			s2[k][m]=c;
			m++;
		}
		else
		{
			s2[k][m]='\0';
			m=0;
			k++;
			n++;
		}
	}
	s2[n][m]='\0';
	for(i=0;i<=n;i++)
	{
		if(strcmp(s2[i],a)==0)
		{
			x=1;
			for(k=0;(d=b[k])!='\0';k++)
			{
				s2[i][k]=b[k];
			}
			s2[i][k]='\0';
		}
	}
	if(x==1)
	{
		for(i=0;i<n;i++)
		{
			printf("%s ",s2[i]);
		}
		printf("%s",s2[n]);
	}
	else
	{
		puts(s1);
	}	
	return 0;
}
