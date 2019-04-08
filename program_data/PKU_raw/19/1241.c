
main()
{
	char *p[100],*a,*b;
	int i,j,t;
	for(i=0;i<100;i++)
	{	p[i]=len;
		for(j=0;j<100;j++)
			p[i][j]='\0';
	}
	for(i=0;;i++)
	{	for(j=0;j<100;j++)
		{	scanf("%c",&p[i][j]);
			if(p[i][j]==' ') 
			{	p[i][j]='\0';
				break;
			}
			if(p[i][j]=='\n') break;
		}
		if(p[i][j]=='\n') 
		{	t=i;
			p[i][j]='\0';
			break;
		}
	}
	a=len;b=len;
	gets(a);
	gets(b);
	for(i=0;i<=t;i++)
	{	if(!strcmp(a,p[i]))
		{	for(j=0;;j++)
			{	if(p[i][j]=='\0') break;
				else p[i][j]='\0';
			}
			strcpy(p[i],b);
		}
	}
	for(i=0;i<t;i++)
	{	printf("%s ",p[i]);
	}
	printf("%s",p[t]);
}