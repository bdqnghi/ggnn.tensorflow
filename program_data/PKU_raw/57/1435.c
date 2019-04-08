void main()
{
    int m,i,j,n,l;
	char a[100];
	scanf("%d",&m);
	for(j=1;j<=m;j++)
	{
		scanf("%s",a);
     l=strlen(a)-1;
		if(a[l]=='r')
		{
			for(n=0;n<l-1;n++)
			{
                printf("%c",a[n]);
			}printf("\n");
		}
        if(a[l]=='y')
		{
			for(n=0;n<l-1;n++)
			{
                printf("%c",a[n]);
			}printf("\n");
		}
		if(a[l]=='g')
		{
			for(n=0;n<l-2;n++)
			{
                printf("%c",a[n]);
			}printf("\n");
		}
	
	}
}
