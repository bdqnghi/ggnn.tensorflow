int main()
{
	char cc[500]={'\0'},c[30][20]={'\0'};
	int a,b,d,e=0,f=0,g[50];
	gets(cc);
	for (a=0;a<500;a++)
	{
		if (cc[a]==' '&&cc[a+1]=='\0')
		{
			cc[a]='\0';
		}
	}
	for (a=0;a<500;a++)
	{
		if (cc[a]==' ')
		{
			e++;
			f=0;
		}
		else
		{
			c[e][f]=cc[a];
			f++;
		}
	}
	for (b=0;b<=e;b++)
	{
		g[b]=strlen(c[b]);
	}
	for (a=0;a<=e;a++)
	{
		f=0;
		for (b=0;b<=e;b++)
		{
			if (g[a]>=g[b])
			{
				f++;
			}
			
		}
		if (f>e)
		{
			printf("%s\n",c[a]);
			break;
		}
	}
	for (a=0;a<=e;a++)
	{
		f=0;
		for (b=0;b<=e;b++)
		{
			if (g[a]<=g[b])
			{
				f++;
			}
			
		}
		if (f>e)
		{
			printf("%s\n",c[a]);
			break;
		}
	}
}



