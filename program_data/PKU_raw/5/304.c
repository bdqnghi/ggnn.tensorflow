int main()
{
	char yuanshi[500],bijiao[500],laji[3];
	double cankao,shiji;
	int jishu=0,i,m,n,panduan=0;
	scanf("%lf",&cankao);
	gets(laji);
	gets(yuanshi);
	gets(bijiao);
	m=strlen(yuanshi);
	n=strlen(bijiao);
	for(i=0;i<m;i++)
	{
		if(yuanshi[i]==bijiao[i])
			jishu++;
		if(yuanshi[i]!='A'&&yuanshi[i]!='T'&&yuanshi[i]!='G'&&yuanshi[i]!='C'&&yuanshi[i]!='\0')
			panduan++;
		if(bijiao[i]!='A'&&bijiao[i]!='T'&&bijiao[i]!='G'&&bijiao[i]!='C'&&bijiao[i]!='\0')
			panduan++;
	}
	if(m!=n||panduan!=0)
	{
		
		printf("error");
	}
	else if(m==n&&panduan==0)
	{
		shiji=jishu*1.0/m;
		if(shiji>cankao)
			printf("yes");
		else
			printf("no");
	}
	

	return 0;
}
