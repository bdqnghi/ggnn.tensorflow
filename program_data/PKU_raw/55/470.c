void main()
{
	int a,b,len,i,nn[100],c,k=0;
	long m=0;
	char n[100],nnn[100];
	scanf("%d%s%d",&a,n,&b);
	len=strlen(n);
	for(i=0;i<len;i++)
	{
		if(n[i]>='A' && n[i]<='Z')
			nn[i]=n[i]-'A'+10;
		else if(n[i]>='a' && n[i]<='z')
			nn[i]=n[i]-'a'+10;
		else if(n[i]>='0' && n[i]<='9')
			nn[i]=n[i]-'0';
		m=m*a+nn[i];
	}
	i=0;
	while(m!=0)
	{
		nnn[i]=m%b;
		m=m/b;
		i++;
	}
	c=i-1;
	for(i=c;i>=0;i--)
	{
		if(nnn[i]==0)
			k++;
	}
	if(k==c+1)
	{
			printf("0");
	}
	else
	{
	for(i=c;i>=0;i--)
	{
		if(nnn[i]>=0 && nnn[i]<=9)
			printf("%d",nnn[i]);
		else if(nnn[i]>=10)
		{
			nnn[i]=nnn[i]-10+'A';
			printf("%c",nnn[i]);
		}
	}
	}
	printf("\n");
}

