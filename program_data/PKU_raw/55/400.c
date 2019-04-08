
main()
{
	int i,a,b,n=0,l,l1=0,p;
	char s[33],t[33];
	scanf("%d%s%d",&a,s,&b);
	l=strlen(s);
	for(i=0;i<l;++i)
	{
		if((s[i]>='0')&&(s[i]<='9'))
			p=s[i]-'0';
		else if((s[i]>='a')&&(s[i]<='z'))
			p=s[i]-'a'+10;
		else
			p=s[i]-'A'+10;
		n=n*a+p;
	}
	for(;n;n/=b)
	{
		p=n%b;
		if(p<10)
			t[l1++]='0'+p;
		else
			t[l1++]='A'+p-10;
	}
	if(!l1)
		printf("0");
	else
		for(i=l1-1;i>=0;--i)
			printf("%c",t[i]);
	printf("\n");
}