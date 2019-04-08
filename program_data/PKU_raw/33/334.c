void main()
{
	int n,i,k,j;
	char word[1000],c;
	scanf("%d",&n);
c=getchar();
	for(i=0;i<n;i++)
	{
		gets(word);
		k=strlen(word);
		for(j=0;j<k;j++)
		{
			if(word[j]=='A')
				printf("T");
			if(word[j]=='T')
				printf("A");
			if(word[j]=='G')
				printf("C");
			if(word[j]=='C')
				printf("G");
		}
		if(j==k)
			printf("\n");
	}
}