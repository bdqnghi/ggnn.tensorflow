void main()
{
	int n,i,l,j;
	char a[100][20];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s",a[i]);
	for(i=0;i<n;i++)
	{
		l=strlen(a[i]);
		if(a[i][l-1]=='r')
		{
			for(j=0;j<l-3;j++)
				printf("%c",a[i][j]);
			printf("%c\n",a[i][l-3]);
		}
		else if(a[i][l-1]=='y')
		{
			for(j=0;j<l-3;j++)
				printf("%c",a[i][j]);
			printf("%c\n",a[i][l-3]);
		}
		else if(a[i][l-1]=='g')
		{
			for(j=0;j<l-4;j++)
				printf("%c",a[i][j]);
			printf("%c\n",a[i][l-4]);
		}
	}
}
