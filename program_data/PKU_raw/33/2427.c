int main()
{
	int n;
	int i;
	char c;
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		while(1)
		{
			scanf("%c",&c);
			if(c=='\n')
			{
			break;
			}
			else if(c=='A')
			{
				printf("T");
			}
			else if(c=='T')
			{
				printf("A");
			}
			else if(c=='G')
			{
				printf("C");
			}
			else if(c=='C')
			{
				printf("G");
			}
		}
        printf("\n");
		
	}
	
	return 0;
}