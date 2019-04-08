
void main()
{
	char n[101];
	char m[101];
	int i,c=0,l,t=0,k=0;
	scanf("%s",n);
	l=strlen(n);
	for(i=0;i<l;i++)
	{
		m[i]=(c*10+n[i]-'0')/13+'0';
		c=(c*10+n[i]-'0')%13;
	}
	for(i=0;i<l-1;i++)
	{
		if(m[i]!='0')
		{
			t = i;
			break;
		}
		else
			t=l-1;
	}
	for(i=t;i<l;i++)
	{
		printf("%c",m[i]);
	}
	printf("\n%d\n",c);
}