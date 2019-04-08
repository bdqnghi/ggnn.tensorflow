void main()
{
	int a,b,i,t;
	long n=0;
	char s[100];
	scanf("%d%s%d",&a,s,&b);
	t=strlen(s)-1;
	for(i=0;i<=t;i++)
		if(s[i]>='0'&&s[i]<='9')
			s[i]=s[i]-'0';
		else if(s[i]>='A'&&s[i]<='Z')
			s[i]=s[i]-'A'+10;
		else if(s[i]>='a'&&s[i]<='z')
			s[i]=s[i]-'a'+10;
		for(i=0;i<=t;i++)
			n=n*a+s[i];
		i=0;
		do
		{
			if(n%b>=10)
				s[i]=n%b+'A'-10;
			else s[i]=n%b+'0';
			n=(n-n%b)/b;
			i++;
		}while(n>0);
		for(i--;i>=0;i--)
			printf("%c",s[i]);
}