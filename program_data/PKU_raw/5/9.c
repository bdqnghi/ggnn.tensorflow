int main()
{
	int len1,len2,i,x;
	double n,result=0,result1;
	char dna1[500];
	char dna2[500];
	scanf("%lf",&n);
	scanf("%s%s",dna1,dna2);
	len1=strlen(dna1);
	len2=strlen(dna2);
	if(len1!=len2)
	{
		printf("error");
		return 0;
	}
	if(len1==len2)
	{
		for(i=0;i<len1;i++)
		{
			if(((dna1[i]=='A')||(dna1[i]=='T')||(dna1[i]=='C')||(dna1[i]=='G'))&&((dna2[i]=='A')||(dna2[i]=='T')||(dna2[i]=='C')||(dna2[i]=='G')))
			{
				x=1;
			}
			else
			{
				x=0;
				break;
			}
		}
	}
	if(x==0)
	{
		printf("error");
		return 0;
	}
	if(x==1)
	{
	for(i=0;i<len1;i++)
	{
		if(dna1[i]!=dna2[i])
		{
			result++;
		}
	}
	result1=(double)1-(result/len1);
	if((result1)>n)
	{
		printf("yes");
	}
	if((result1)<=n)
	{
		printf("no");
	}
	}
	return 0;
}

