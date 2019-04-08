

int main()
{
	int n,i;
	scanf("%d",&n);
	getchar();
	char base[256],*p;
	for(i=0;i<n;i++)
	{
		scanf("%s",&base);
		p=base;
		for(;p<=&base[strlen(base)-1];p++)
		{
			if(*p=='A')
			{
				printf("T");
			}else if(*p=='T')
			{
				printf("A");
			}else if(*p=='C')
			{
				printf("G");
			}else
			{
				printf("C");
			}	
		}
		printf("\n");
	}
	return 0;
}