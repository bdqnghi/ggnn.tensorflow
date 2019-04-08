int main()
{
	int n,i,l,j;
	char dna[256],change[256];
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%s",&dna);
		l = strlen(dna);
		for (j=0;j<l;j++)
		{
			if (dna[j] == 'A')
				change[j] = 'T';
			else if (dna[j] == 'T')
				change[j] = 'A';
			else if (dna[j] == 'C')
				change[j] = 'G';
			else 
				change[j] = 'C';
		}
		change[l] = '\0';
		printf("%s\n",change);
	}
	return 0;
}