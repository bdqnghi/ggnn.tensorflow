void main()
{
	char c[100][100];
	int j,i,n;
	int a[100];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{gets(c[i]);
	a[i]=strlen(c[i]);
	}
	for(i=0;i<n;i++)
		if(c[i][a[i]-1]=='r'||c[i][a[i]-1]=='y')
		{	for(j=0;j<a[i]-2;j++)
				printf("%c",c[i][j]);
		printf("\n");
		}
		else if(c[i][a[i]-1]=='g')
		{	for(j=0;j<a[i]-3;j++)
			printf("%c",c[i][j]);
		printf("\n");
		}

}