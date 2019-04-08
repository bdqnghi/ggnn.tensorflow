int main()
{
	int i,a,n,k;
	char dna[256];
	scanf("%d",&n);
	for(k=0;k<n;k++)
	{
		scanf("%s",dna);
	    a=strlen(dna);
		if(k!=0)
			printf("\n");
        for(i=0;i<a;i++)
		{
			if(dna[i]=='A')
			    printf("%c",'T');
		    else if(dna[i]=='T')
			    printf("%c",'A');
		    else if(dna[i]=='C')
		    	printf("%c",'G');
		    else if(dna[i]=='G')
 		    	printf("%c",'C');
		} 
	}
return 0;
}
