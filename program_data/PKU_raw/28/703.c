void main()
{
	char str[1024];
	int i,j,a[300],k=0;
	gets(str);
	for(i=0;i<300;i++)
	{
		a[i]=0;
	}
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]!=' ')
		{
			a[k]++;
		}
		if(str[i]==' '||str[i+1]=='\0')
		{
			if(str[i-1]==' ') continue;
			if(str[i-1]!=' ') k++;
		}
	}
	printf("%d",a[0]);
	for(i=1;i<k;i++)
	{
		printf(",%d",a[i]);
	}
}