void main()
{
	int a,b,i,j;
	long k;
	char n[50],m[50],s[50];
	scanf("%d %s %d",&a,n,&b);
	k=0;
	for(i=0;i<strlen(n);i=i+1)
	{
		if(n[i]>=48&&n[i]<=57)
			k=k*a+n[i]-48;
		if(n[i]>='A'&&n[i]<='Z')
			k=k*a+n[i]-55;
		if(n[i]>='a'&&n[i]<='z')
			k=k*a+n[i]-87;
	}
	if(k==0)
		printf("0");
	for(i=0;k>0;i=i+1)
	{
		if(k%b<10)
			m[i]=k%b+48;
		else m[i]=k%b+55;
		k=k/b;
	}
	i=i-1;
	for(j=0;i>=0;j=j+1)
	{
		s[j]=m[i];
		i=i-1;
	}
	for(i=0;i<j;i=i+1)
	{
		printf("%c",s[i]);
	}

}
