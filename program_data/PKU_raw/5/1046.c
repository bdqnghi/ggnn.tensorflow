int main()
{
	char a[501],b[501];
	int i,summ;
	double bl,sjbl,s,sum;
	s=0;
	scanf("%lf",&bl);
	scanf("%s",a);
	scanf("%s",b); 
	sum=strlen(a);
	summ=strlen(b);
     if(sum!=summ)
	{
		printf("error");
		return 0;
}else{
	for(i=0;i<sum;i++)
	{
		if((a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')||(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G'))
		{
			printf("error");
			return 0;
		}
		if(a[i]==b[i])
			s++;
	}
}
	sjbl=s/sum;
    if(sjbl>bl)
	{
		printf("yes");
	}else{
		printf("no");
	}
    return 0;
}
 