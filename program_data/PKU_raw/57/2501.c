main()
{
	char str[20];
	int n,i,a;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		gets(str);
		a=strlen(str);
		if(str[a-2]=='e'&&str[a-1]=='r') str[a-2]='\0';
		if(str[a-2]=='l'&&str[a-1]=='y') str[a-2]='\0';
		if(str[a-3]=='i'&&str[a-2]=='n'&&str[a-1]=='g') str[a-3]='\0';
		puts(str);
		if(i<n-1) printf("\n");

	}
}


