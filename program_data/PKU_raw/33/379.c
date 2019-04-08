int main()
{
    char a[255];
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
        if(i!=0)
			printf("\n");
	    scanf("%s",&a);
		for(j=0;j<strlen(a);j++)
		{
			if(a[j]=='A')
				printf("T");
			if(a[j]=='T')
				printf("A");
			if(a[j]=='C')
				printf("G");
			if(a[j]=='G')
				printf("C");
		}
		memset(a,0,sizeof(a));
	}
	return 0;
}
