int main()
{
	int n;
	scanf("%d",&n);
	char zfc[1000];
gets(zfc);
	for(int j=0;j<n;j++)
	{
	   gets(zfc);
    	for(int i=0;;i++)
	{
		if(zfc[i]=='A')
		{
			printf("T");
			continue;
		}
        if(zfc[i]=='T')
		{
			printf("A");
			continue;
		}
		if(zfc[i]=='C')
		{
			printf("G");
			continue;
		}
		if(zfc[i]=='G')
		{
			printf("C");
			continue;
		}
		
        if(zfc[i]=='\0')
		{
			printf("\n");
        	break;
		}
	}
	}
	return 0;
}
	
	
