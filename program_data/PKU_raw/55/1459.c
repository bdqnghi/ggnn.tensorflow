int main()
{
	char s[20],r[40];
	int i,j,a,b,l;
	long n=0;
	scanf("%d%s%d",&a,s,&b);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		if(s[i]>='a'&&s[i]<='z')
			n=a*n+s[i]-'a'+10;
		else if(s[i]>='A'&&s[i]<='Z')
			n=a*n+s[i]-'A'+10;
		else n=a*n+s[i]-'0';
	}
	//printf("%ld\n",n);
	i=0;
	if(n==0) 
	{
		printf("0\n");
		return 0;
	}
	while(n>0)
	{
		if(n%b<=9)
			r[i++]=n%b+'0';
		else
			r[i++]=n%b-10+'A';
		n=n/b;
	}
	for(j=i-1;j>=0;j--)
	{
		printf("%c",r[j]);
	}
	printf("\n");
	return 0;
}



	



