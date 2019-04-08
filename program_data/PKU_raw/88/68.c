main()
{
	int i,j;
	char a[30];
	gets(a); 
	i=0;
	while(i<strlen(a))
	{
		if(a[i]>='0'&&a[i]<='9')
		{
			for(j=i;a[j]>='0'&&a[j]<='9';j++)
			printf("%c",a[j]);
			printf("\n");
			i=j+1;
		}
		else i++;
	}
} 