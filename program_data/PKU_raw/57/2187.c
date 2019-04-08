void main()
{
	int n,i,j;
	char a[50][50];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s",a[i]);
	for(i=0;i<n;i++)
	{
		if((a[i][strlen(a[i])-1]=='y')&&(a[i][strlen(a[i])-2]=='l'))
		{
			for(j=0;j<strlen(a[i])-2;j++)
				printf("%c",a[i][j]);
		}
		if((a[i][strlen(a[i])-1]=='r')&&(a[i][strlen(a[i])-2]=='e'))
		{
			for(j=0;j<strlen(a[i])-2;j++)
				printf("%c",a[i][j]);
		}
		if((a[i][strlen(a[i])-1]=='g')&&(a[i][strlen(a[i])-2]=='n')&&(a[i][strlen(a[i])-3]=='i'))
		{
			for(j=0;j<strlen(a[i])-3;j++)
				printf("%c",a[i][j]);
		}
		printf("\n");
	}
}