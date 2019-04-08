void main()
{
	char *p,*q;
	int k,m=0;
	char *s,*a,*b;
	s=(char*)malloc(100*sizeof(char));
	a=(char*)malloc(100*sizeof(char));
	b=(char*)malloc(100*sizeof(char));
	gets(s);
	scanf("%s %s",a,b);

	k=strlen(a);
	p=s;q=a;
	//printf("%c ",*q);

	while(*p!='\0')
	{
		//printf(" %d ",m);
		if(m==k)
		{
			if(*p==' '||*p=='\0')
			{
				printf("%s",b);
				m=0;q=a;
			}
			else
			{
				printf("%s",a);
				m=0;q=a;
			}
		}
		//printf("%c-%c ",*p,*q);

		if(*p==*q)
		{
			m++;
			if(m==1)
			{
				if(p==s)
				{
					p++;q++;
				}
				else 
				{
					p--;
					if(*p==' ')
					{
						p=p+2;q++;
					}
				    else
					{
					m=0;q=a;p++;
					printf("%c",*p);
					p++;
					}
				}
			}
			else
			{
				p++;q++;
			}
		}
		else
		{
			p=p-m;
			printf("%c",*p);
			m=0;q=a;
			p++;
		}
	}
	if(m==k)
		printf("%s",b);
}
