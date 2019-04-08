void main()
{
	char *str,*p,*q;
	int n;
	str=(char*)malloc(301*sizeof(char));
	memset(str,'\0',sizeof(str));
	gets(str);
	p=q=str;
	while(1)
	{
		if(*p!=' '&&*p!='\0')
		{
			p++;
			continue;
		}
		if(*p==' '||*p=='\0')
		{
			n=p-q;
			if(n==0)
			{
				p++;
				q=p;
				continue;
			}
			if(*p=='\0')
			{
				printf("%d",n);
				break;
			}
			if(*p==' ')
			{
				printf("%d,",n);
				p++;
				q=p;
				continue;
			}
		}
	}
}
