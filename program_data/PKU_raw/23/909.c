void main()
{
	char *str,*p,*q,*temp;
	int n,i;
	str=(char*)calloc(128,sizeof(char));
	gets(str);
	n=strlen(str);
	for(i=n-1;i>=0;i--)
	{
		*(str+i+1)=*(str+i);
	}
	*str='\0';
	p=q=str+n;
	while(1)
	{
		if(*p!=' '&&*p!='\0')
		{
			p--;
			continue;
		}
		if(*p==' '||*p=='\0')
		{
			for(temp=p+1;temp<=q;temp++)
				printf("%c",*temp);
			if(*p!='\0')
				printf(" ");
			else
				break;
			p--;
			q=p;
			continue;
		}
	}
}
