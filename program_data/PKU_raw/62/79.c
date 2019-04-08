main()
{
	char a[3000],i;
	gets(a);
	for(i=0;i<(signed)strlen(a);i++)
	{
		printf("%c",a[i]);
		if(a[i]==' ')
		{
		for(;i<(signed)strlen(a);i++)
		{
			if(a[i+1]!=' ')
				break;
		}}
	}
			
}