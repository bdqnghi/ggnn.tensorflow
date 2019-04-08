int main()
{
	int n,i;
	char z;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("\n");
		do
		{
			scanf("%c",&z);
			if(z=='A')
				printf("T");
			else if(z=='T')
				printf("A");
			else if(z=='C')
				printf("G");
			else if(z=='G')
				printf("C");
		}while(z!='\n');
		printf("\n");
	}
	return 0;
}