void main()
{
	char str[10000];
	int a[512]={0};
	int n,i,j=0;
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!=' '&&str[i+1]!=' ')
			a[j]=a[j]+1;
		else if(str[i]!=' '&&str[i+1]==' '||str[i]!=' '&&str[i+1]=='\0')
		{
			a[j]=a[j]+1;
			j=j+1;
		}
	}
	n=j+1;
	for(j=0;j<n-1;j++)
		printf("%d,",a[j]);
	printf("%d",a[j]);
}