int main()
{
	int n,i,j,t;
	char a[50][15]={0};
	scanf("%d",&n);
	printf("\n");
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
	    printf("\n");
	}
	for(i=0;i<n;i++)
	{   
		t=strlen(a[i]);
		if(a[i][t-1]=='r'&&a[i][t-2]=='e')
		{
	for(j=0;j<t-2;j++)
	{	printf("%c",a[i][j]);}
	printf("\n");
		}
		else if(a[i][t-1]=='y'&&a[i][t-2]=='l')
		{
        for(j=0;j<t-2;j++)
		{	printf("%c",a[i][j]);}
		printf("\n");
		}
		else if(a[i][t-1]=='g'&&a[i][t-2]=='n'&&a[i][t-3]=='i')
		{
		for(j=0;j<t-3;j++)
		{	printf("%c",a[i][j]);}
		printf("\n");
		}
		else 
			for(j=0;j<t;j++)
			{	printf("%c",a[i][j]);}
			printf("\n");
	}

	return 0;
}