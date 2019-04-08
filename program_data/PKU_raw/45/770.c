main()
{
	char a[50],b[50],c[50];int i,j,k;
	scanf("%s%s",a,b);
	k=strlen(a);
	for (i=0;i<50;i++)
	{
		for (j=i;j<i+k;j++) c[j-i]=b[j];
		c[k]='\0';a[k]='\0';
		if (strcmp(a,c)==0) 
		{
			printf("%d",i);
			break;
		}
	}
}
