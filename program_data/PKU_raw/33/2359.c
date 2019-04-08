

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
			}
			if(*p=='T')
			{
				printf("A");
			}
			if(*p=='C')
			{
				printf("G");
			}
			if(*p=='G')
			{
				printf("C");
			}
			if(p==&base[strlen(base)-1])
			{
				printf("\n");
			}
		}
	}
	return 0;
}