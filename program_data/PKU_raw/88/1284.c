int shuzi(char a)
	{
		if(48<=a&&a<=57)
			return 0;
		else return 1;
}
int main()
{
	char a[100];
	gets(a);
	char *p=a;
	while(*p!='\0')
	{
		if(shuzi(*p)==0)
			cout<<*p;
		if(shuzi(*p)==1&&shuzi(*(p-1))==0)
			cout<<endl;
		p++;
	}
	return 0;
}
