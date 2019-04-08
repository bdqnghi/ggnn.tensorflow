void main()
{
	char str[300]={'\0'},w1[100],w2[100];
	char *p,*q;
	
	gets(str);
	gets(w1);
	gets(w2);
	p=str;
	q=str;
	while(*p!=' ')
	{
		p++;
	}
	*p='\0';
	
	if(strcmp(q,w1)==0)
	{
		printf("%s",w2);
	}
	else
	{
		printf("%s",q);
	}
	p++;
	q=p;
	
	while(*p!='\0')
	{
		p++;
		if((*p==' ')||(*p=='\0'))
		{
			*p='\0';
			
			printf(" ");
				if(strcmp(q,w1)==0)
				{
					printf("%s",w2);
				}
				else
				{
					printf("%s",q);
				}
					
				p++;
				q=p;
		}
	}
}




