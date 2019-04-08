void main()
{
	char a[100][20],m,b[20],c[20];
	int i,j;
	for(i=0;;i++)
	{
		scanf("%s",a[i]);
		if(getchar()=='\n')
			break;
	}
	    gets(b);
	    gets(c);
	for(j=0;j<=i;j++)
	{
		if(strcmp(a[j],b)==0)
		{
			strcpy(a[j],c);
					}
	}
	
	

	for(j=0;j<i;j++)
		printf("%s ",a[j]);
	printf("%s",a[i]);

}
