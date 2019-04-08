void main()
{
	void minus(char x[1000],char y[1000]);
	int i,n;
	char a[1000]={0},b[1000]={0};
	scanf("%d",&n);
	i=0;
	while(i<n)
	{
		scanf("%s",a);
		scanf("%s",b);
		if(a[0]!='\0')
		{
			i=i+1;
			minus(a,b);
			printf("\n");
		}
	}
}
void minus(char x[1000],char y[1000])
{
	int la,lb,i,s,c=0,t=0,ls;
	char str[1000]={0},temp;
	la=strlen(x);
	lb=strlen(y);
	do
	{
		if(lb>0)s=x[la-1]-y[lb-1];
		if(lb<=0)s=x[la-1]-48;
		s=s-c+48;
		if(s<48) 
		{
			s=s+10;
			c=1;
		}
		else c=0;
		str[t]=s;
		t++;
		la--;
		lb--;
	}
	while(la>0);
	ls=strlen(str);
	for(i=ls-1;;i--)
	{
		if(str[i]=='0')str[i]='\0';
		if(str[i]!='0')break;
	}
	ls=strlen(str)-1;
	for(i=0;i<=ls/2;i++)
	{
        temp=str[i];
        str[i]=str[ls-i];
        str[ls-i]=temp;
    }
	printf("%s",str);
}