int main()
{
	int n,m,l,p,q,i;
	char s[110]={'\0'},x[110]={'\0'};
	scanf("%s",s);
	l=strlen(s);m=s[0]-'0';
	for(i=0;i<l-1;i++)
	{
		m=m*10+s[i+1]-'0';
		x[i]=(m/13)+'0';m=m%13;
	}
	if(x[0]=='0')
	{
		for(i=0;i<l;i++)
		{
			x[i]=x[i+1];
		}
	}
	if(x[0]=='\0')
	{
		x[0]='0';
	}
	printf("%s\n%d\n",x,m);	
} 