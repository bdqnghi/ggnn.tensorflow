int main()
{
	double b;
	char dna1[501],dna2[501];
	scanf("%lf",&b);
	scanf("%s",dna1);
	scanf("%s",dna2);
	int d=0,i,p=0,m=strlen(dna1),l=strlen(dna2);
	for(i=0;dna1[i]||dna2[i];i++)
	{
		if(m!=l)
		{
			d=1;
			break;
		}
		if(dna1[i]!='A'&&dna1[i]!='T'&&dna1[i]!='C'&&dna1[i]!='G')
		{
			d=2;
			break;
		}
		if(dna2[i]!='A'&&dna2[i]!='T'&&dna2[i]!='C'&&dna2[i]!='G')
		{
			d=3;
			break;
		}
		if(dna1[i]!=dna2[i])
		{
			p++;
		}
	}
	double q=1-p/m;
	if(d!=0)
	{
		printf("error");
	}
	if(q>b&&d==0)
	{
		printf("yes");
	}
	else if(d==0&&q<=b)
	{
		printf("no");
	}
	return 0;
}