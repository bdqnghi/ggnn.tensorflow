int main()
{
	char *p,c;
	int i;
	p=(char *)malloc(sizeof(char));
	for(i=0;;i++)
	{
		scanf("%c",&c);
		if(c=='\n')
		{
			*(p+i)='\0';
			break;
		}
		else
		{
			*(p+i)=c;
		}
	}
	for(i=0;;i++)
	{
		c=*(p+i);
		if(c=='\0')
		{
			break;
		}
		else if(c!=' ')
		{
			printf("%c",c);
		}
		else if(c==' '&&*(p+i-1)!=' ')
		{
			printf("%c",c);
		}
	}
	return 0;
}