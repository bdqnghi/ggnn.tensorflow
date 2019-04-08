
int main()
{
	int n, i, j;
	char **dna;
	scanf("%d", &n);
	dna=(char**)malloc(sizeof(char*)*n);
	for (i=0;i<n;i++)
		dna[i]=(char*)malloc(sizeof(char)*255);
	
	for (i=0;i<n;i++)
		scanf("%s",dna[i]);

	char ch;

	for (i=0;i<n;i++)
	{
		for (j=0;(ch=dna[i][j])!=0;j++)
		{
			switch(ch)
			{
			case 'A':
				printf("T");
				break;
			case 'T':
				printf("A");
				break;
			case 'G':
				printf("C");
				break;
			case 'C':
				printf("G");
				break;
			}
		}
		printf("\n");
	}

	for (i=0;i<n;i++)
		free(dna[i]);
	free(dna);
	return 0;
}