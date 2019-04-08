int main()
{
	int n;
	scanf("%d\n",&n);
	int i;
	for(i=0;i<n;i++)
	{
		char m;
		do
		{
			scanf("%c",&m);
			if (m=='A')
			{
				printf("T");
			}
			else if(m=='T')
			{
				printf("A");
			}
			else if(m=='G')
			{
				printf("C");
			}
			else if(m=='C')
			{
				printf("G");
			}
		}while(m!='\n');
		printf("\n");
	}
	return 0;
}
