void main()
{
	char s[500];
	unsigned int i,j,flag=0;
	char *p;
	scanf("%s",s);
	for(i=2;i<=strlen(s);i++)
	{
		for(p=s;*(p+i-1)!='\0';p++)
		{
			flag=0;
			for(j=0;j<i/2;j++)
			{
				if(*(p+j)!=*(p+i-1-j))
					flag=1;
			}
			if(flag==0)
			{
				for(j=0;j<i;j++)
					putchar(*(p+j));
				printf("\n");
			}
		}
	}
}