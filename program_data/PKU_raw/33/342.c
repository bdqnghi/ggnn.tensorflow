void main()
{
	int n,l,i;char c[10];
	char str[256];
	scanf("%d",&n);gets(c);
	while(n--)
	{
		memset(str,0,sizeof(str));
		gets(str);
		l=strlen(str);
		for(i=0;i<l;i++)
		{
			switch(str[i])
			{
			case'A':printf("T");break;
			case'T':printf("A");break;
			case'C':printf("G");break;
			case'G':printf("C");break;
			}
		}
		printf("\n");
	}
}
