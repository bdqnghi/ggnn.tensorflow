
int main()
{ 
	int i,l,a,b,c[100],d,A=0;
	char s[100];
	scanf("%d %s %d",&a,s,&b);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		if(s[l-i-1]>='0'&&s[l-i-1]<='9')
			c[i]=s[l-i-1]-'0';
		if(s[l-i-1]>='a'&&s[l-i-1]<='z')
			c[i]=s[l-i-1]-'a'+10;
		if(s[l-i-1]>='A'&&s[l-i-1]<='Z')
			c[i]=s[l-i-1]-'A'+10;
		A=(double)A+(double)c[i]*pow((double)a,(double)i);
	}
	for(i=0;;i++)
	{
		d=A%b;
		if(d<=9)
			s[i]=d+'0';
		else
			s[i]=d-10+'A';
		A=A/b;
		if(A==0)
			break;
	}
	for(;i>=0;i--)
	{
		printf("%c",s[i]);
	}
	return 0;
}
