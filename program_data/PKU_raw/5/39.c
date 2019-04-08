int main()
{
	double n,t=0;
	int i,j;
	scanf("%lf",&n);
	char dna1[600],dna2[600];
	scanf("%s %s",dna1,dna2);
	int len1=strlen(dna1),len2=strlen(dna2);
	int flag=1;
	for(i=0,j=0;i<len1,j<len2;i++,j++)
	{
		if(len1!=len2||dna1[i]!='A'&&dna1[i]!='T'&&dna1[i]!='C'&&dna1[i]!='G'||dna2[j]!='A'&&dna2[j]!='T'&&dna2[j]!='C'&&dna2[j]!='G')
		{
			printf("error");
			flag=0;
			break;
		}
		if(dna1[i]==dna2[j])
		{
			t++;
		}

	}
	
	if(flag==1)
	{
		if(t/len1>n)
		{
			printf("yes");
		}
		else
			printf("no");
	}
	return 0;
}