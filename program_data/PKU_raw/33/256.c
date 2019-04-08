int main(int argc, char* argv[])
{
	char dna[1000],hubu[1000];
	int n,length;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",dna);
		length=strlen(dna);
		for(int j=0;j<length;j++)
		{
			if(dna[j]=='A')
			{
				hubu[j]='T';
			}
			else if(dna[j]=='T')
			{
				hubu[j]='A';
			}
			else if(dna[j]=='G')
			{
				hubu[j]='C';
			}
			else if(dna[j]=='C')
			{
				hubu[j]='G';
			}
		
	    printf("%c",hubu[j]);}
		printf("\n");
	}

	return 0;
}


