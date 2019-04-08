void main()
{
	char c[200][200];
	int i,j,k,m,n,a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",c[i]);
		a[i]=strlen(c[i]);
	}
	for(i=0;i<n;i++)
	{
		if(c[i][a[i]-1]=='r'||c[i][a[i]-1]=='y')
			for(j=0;j<a[i]-2;j++)
				printf("%c",c[i][j]);
		else
				for(j=0;j<a[i]-3;j++)
				printf("%c",c[i][j]);
				printf("\n");
	}
}


