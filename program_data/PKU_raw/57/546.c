void main()
{
	char str[35];
	int n,i,l,a,b,c;
	scanf("%d",&n);
	gets(str);
	for(i=0;i<n;i++)
	{
		gets(str);
		l=strlen(str);
		switch (str[l-1])
		{
		case'r':
			for(a=0;a<l-2;a++)
				   printf("%c",str[a]);
			printf("\n");
			break;
		case'y':
			for(b=0;b<l-2;b++)
				   printf("%c",str[b]);
						printf("\n");
			break;
		case'g':
			for(c=0;c<l-3;c++)
				   printf("%c",str[c]);
						printf("\n");
			break;
		}
	}
}
