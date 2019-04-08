int main()
{
	double bl,jl;
	scanf("%lf",&bl);
	char dna1[501],dna2[501];
	scanf("%s",dna1);
	scanf("%s",dna2);
	int i,k=0,l,n=0;
	l=strlen(dna1);
	for(i=0;i<l;i++)
	{
		if((dna1[i]!='A'&&dna1[i]!='G'&&dna1[i]!='C'&&dna1[i]!='T')||(dna2[i]!='A'&&dna2[i]!='G'&&dna2[i]!='C'&&dna2[i]!='T'))
		{
			k++;
		}
	}
	if(k>0)
	{
		printf("error\n");
	}
	else
	{
		for(i=0;i<l;i++)
		{
			if(dna1[i]==dna2[i])
			{
				n++;
			}
		}
		jl=1.0*n/(l-1);
		if(jl>bl)
		{
			printf("yes\n");
		}
		else
		{
			printf("no\n");
		}
	}
	return 0;
}


