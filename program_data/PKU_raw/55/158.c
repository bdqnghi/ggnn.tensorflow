void main()
{
	long int n,s;
	int a,b,len,i,j;
	char num[50],res[50]=" ";
	scanf("%d %s %d",&a,num,&b);
	len=strlen(num);
	s=0;
	for(i=len-1;i>=0;i--)
	{
		n=1;
		for(j=1;j<=len-1-i;j++)
			n=n*a;
		if(num[i]>='0'&&num[i]<='9')
			s=s+n*(num[i]-'0');
		else if(num[i]>='a'&&num[i]<='z')
			s=s+n*(num[i]-'a'+10);
		else if(num[i]>='A'&&num[i]<='Z')
			s=s+n*(num[i]-'A'+10);
	}
	n=s;j=0;
	while(n!=0)
	{
		i=n%b;
		n=n/b;
		if(i<10) res[j]='0'+i;
		else res[j]='A'+i-10;
		j++;
	}
	n=strlen(res);
	if(res[n-1]==' ') printf("0");
	else
	{
		for(i=n-1;i>=0;i--)
			printf("%c",res[i]);
	}
}

