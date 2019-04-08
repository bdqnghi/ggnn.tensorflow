void main()
{
	int n,i,j,length;
	char a[100];

	scanf("%d",&n);
	for(j=1;j<=n+1;j++)
	{
		gets(a);
		length=strlen(a);
		if(a[length-3]=='i'&&a[length-2]=='n'&&a[length-1]=='g')
		{
			for(i=0;i<=length-4;i++)
				printf("%c",a[i]);
		        printf("\n");
		}
		else
		{
			for(i=0;i<=length-3;i++)
				printf("%c",a[i]);
		        printf("\n");
		}
	}
}