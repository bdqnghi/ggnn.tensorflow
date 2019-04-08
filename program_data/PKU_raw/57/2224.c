void main()
{
	int i,j,l,n;
	char str[20];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",str);
			l=strlen(str);
		if(str[l-2]=='e')
			for(j=0;j<l-2;j++)
				printf("%c",str[j]);
				if(str[l-2]=='l')
			for(j=0;j<l-2;j++)
					printf("%c",str[j]);
				if(str[l-3]=='i')
			for(j=0;j<l-3;j++)
				printf("%c",str[j]);
printf("\n");

		}
	}
