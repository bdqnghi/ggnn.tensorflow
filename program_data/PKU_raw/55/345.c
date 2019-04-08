long trans1(char *s,int n)
{
	long ans=0;
	int i,j,len;
	len=strlen(s);
	for(i=0;i<len;i++)
	{
		if(s[i]>='0'&&s[i]<='9')
		{
			j=s[i]-'0';
			ans=ans+j*pow(n,len-i-1);
		}
		else if(s[i]>='a'&&s[i]<='z')
		{
			j=s[i]-'a'+10;
			ans=ans+j*pow(n,len-i-1);
		}
		else if(s[i]>='A'&&s[i]<='Z')
		{
			j=s[i]-'A'+10;
			ans=ans+j*pow(n,len-i-1);
		}
	}
	return ans;
}
void trans2(char *s,int n,long m)
{
	int i,r,len;
	for(i=0;m!=0;i++)
	{
		r=m%n;
		if(r>=10)
			s[i]=r-10+'A';
		else
			s[i]=r+'0';
		m=m/n;
	}
	s[i]='\0';
	len=strlen(s);
	for(i=len-1;i>=0;i--)
		putchar(s[i]);
}
void main()
{
	int n1,n2;
	long k;
	char s[5000],ans[5000];
	scanf("%d%s%d",&n1,s,&n2);
	if(s[0]=='0')
		printf("0");
	else
	{
		k=trans1(s,n1);
		trans2(ans,n2,k);
	}
}