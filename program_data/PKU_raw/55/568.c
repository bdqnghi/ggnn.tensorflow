
int main()
{	
	char n[100],t[100];
	int a,b,s[100],i,j,m;
	long num=0;
	scanf("%d%s%d",&a,n,&b);
	m=strlen(n);
	for(i=0;i<m;i++)
		if(n[i]>='0'&&n[i]<='9')
			num=num*a+n[i]-'0';
		else if(n[i]>='a'&&n[i]<='z')
			num=num*a+n[i]-'a'+10;
		else if(n[i]>='A'&&n[i]<='Z')
			num=num*a+n[i]-'A'+10;
	for(i=0;num>=b;i++)
	{
		s[i]=num%b;
		num=num/b;
	}s[i]=num%b;
	j=i;
	for(i=0;i<=j;i++)
	{
		if(s[i]>=10)
			t[i]=s[i]-10+'A';
		else 
			t[i]=s[i]+'0';
	}
	for(i=j;i>=0;i--)
	printf("%c",t[i]);
	printf("\n");


	return 0;
}