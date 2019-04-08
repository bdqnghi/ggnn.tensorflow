int main()
{
	int a,b,d,e=-1;
	char f[100],g[100],h[100],i[100],j[100];
	gets(f);
	gets(g);
	gets(h);
	f[-1]=' ';
	for(a=-1;a<=100;)
	{
		i[e]=f[a];
		if(f[a]==' '&&f[a+1]==g[0])
		{
			for(b=0;;b++)
			{
				if(g[b]=='\0')
				{
					for(d=0;h[d]!='\0';d++)
					{
						i[e+d+1]=h[d];
					}
					i[e+d+1]=' ';
					e=e+d;
					a=a+b;
					break;
				}

				if(f[a+b+1]!=g[b]) break;
			}
		}
		a++;
		e++;
	}
	printf("%s",i);
}
				










