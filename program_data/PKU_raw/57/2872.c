int main()
{
	int n,i,len;
	char *p;
	char str[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",str);
		len=strlen(str);
		p=&str[len-1];
		if(*p=='g')
		{
			p=&str[len-3];
			*p='\0';
			printf("%s\n",str);
		}
		else
		{
            p=&str[len-2];
			*p='\0';
			printf("%s\n",str);
		}
	}
	return 0;
}

