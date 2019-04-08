
int main()
{
	char a[300],b[300],c[300];
	int lena,lenb,add=0;
	cin>>a>>b;
	lena=strlen(a)-1;
	lenb=strlen(b)-1;
	int cl=0;
	for (;lena>=0&&lenb>=0;lena--,lenb--)
	{
		add+=a[lena]+b[lenb]-2*'0';
		c[cl++]=add%10;
		add/=10;
	}
	while (lena>=0)
	{
		add+=a[lena--]-'0';
		c[cl++]=add%10;
		add/=10;
	}
	while (lenb>=0)
	{
		add+=b[lenb--]-'0';
		c[cl++]=add%10;
		add/=10;
	}
	if (add!=0)
	{
		c[cl++]=add;
	}
	cl--;
	while (cl>=0&&c[cl]==0)
	{
		cl--;
	}
	if (cl==-1)
	{
		printf("0");
	}
	for (;cl>=0;cl--)
	{
		printf("%c",c[cl]+'0');
	}
	return 0;
}