int main()
{
	int a,b;
	char s[100];
	long num=0;;
	for(int i=0;i<100;i++)
		s[i]='\0';
	scanf("%d",&a);
	scanf("%s",&s);
	scanf("%d",&b);
	for(int j=0;j<100;j++)
	{
		if(s[j]>='0'&&s[j]<='9')
			num=num*a+s[j]-'0';
		if(s[j]>='a'&&s[j]<='z')
			num=num*a+s[j]-'a'+10;
		if(s[j]>='A'&&s[j]<='Z')
			num=num*a+s[j]-'A'+10;
	}
	for(int p=0;p<100;p++)
		s[p]='\0';
	int m,n=num;
	for(int t=0;;t++)
	{
		m=n%b;
		n=n/b;
		if(m>=10)
			s[t]=m-10+'A';
		else
			s[t]=m+'0';
		if(n==0)
			break;
	}
	for(int q=99;q>=0;q--)
	{
		if(s[q]!='\0')
			printf("%c",s[q]);
	}
	return 0;
}

