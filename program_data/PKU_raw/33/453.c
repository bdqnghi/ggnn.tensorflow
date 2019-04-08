int main()
{
	int n,i;
	scanf("%d",&n);
	char str[260],*ps;
	int a=0;
	for(i=0;i<n;i++)
	{
		scanf("%s",&str);
		for(ps=str;*ps!='\0';ps++)
		{
			if(*ps=='A')
			*ps='T';
			else if(*ps=='T')
			*ps='A';
			else if(*ps=='C')
			*ps='G';
			else if(*ps=='G')
			*ps='C';
	    }
	    printf("%s\n",str);
    }
	return 0;
}