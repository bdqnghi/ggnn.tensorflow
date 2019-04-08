int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		char line[256];
		scanf("%s",&line);
		for(int j=0;j<256;j++)
		{
			if(line[j]=='A')
			{
				printf("T");
			}
			else if(line[j]=='T')
			{
				printf("A");
			}
			else if(line[j]=='C')
			{
				printf("G");
			}
			else if(line[j]=='G')
			{
				printf("C");
			}
			else
			{
				printf("\n");
				break;
			}
		}
	}
	return 0;
}