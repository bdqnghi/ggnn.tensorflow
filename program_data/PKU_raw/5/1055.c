int main()
{
	double n,b;
	scanf("%lf",&n);
	int i,m,a,o;
	a=0;
	char ji[1000],yin[1000];
	scanf("%s",ji);
	scanf("%s",yin);
	m=strlen(ji);
	o=strlen(yin);
	if(m!=o)
	{
		printf("error");
		return 0;
	}
	for(i=0;i<m;i++)
	{
		if((ji[i]!='A'&&ji[i]!='C'&&ji[i]!='G'&&ji[i]!='T')||(yin[i]!='A'&&yin[i]!='C'&&yin[i]!='G'&&yin[i]!='T'))
		{
			printf("error");
			return 0;
		}
	}
	if(n>=1)
	{
		printf("no");
		return 0;
	}
	for(i=0;i<m;i++)
	{
		if(ji[i]==yin[i])
		{
			a++;
		}
	}
	b=1.0*a/1.0*m;
	if(b>=n)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}

