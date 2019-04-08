int main()
{
	int n,l,i,j;
    char c[256];
	char d[5]="ATCG";
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
        scanf("%s",c);
		l=strlen(c);
		for(j=0;j<l;j++)
		{
			if(c[j]==d[0])
			{
				printf("T");
			}
            if(c[j]==d[1])
			{
				printf("A");
			}
            if(c[j]==d[2])
			{
				printf("G");
			}
            if(c[j]==d[3])
			{
				printf("C");
			}
		}
		printf("\n");
	}
	return 0;
}
