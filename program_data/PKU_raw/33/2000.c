int main()
{
	int n,i;
	char zfc[10000][256],*ps;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",zfc[i]);
	}
	for(i=0;i<n;i++)
	{
		for(ps=zfc[i];*ps!='\0';ps++)
		{
			if(*ps==65)
			{
				printf("T");
				
			}
			else if(*ps==84)
			{
				printf("A");
			}
			else if(*ps==71)
			{
				printf("C");
			}
			else if(*ps==67)
			{
				printf("G");
			}
		}
		printf("\n");
	}
	return 0;
}