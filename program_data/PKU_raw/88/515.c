int main()
{
	char c[30];
	char *p=NULL;
	cin.getline(c,31);
	for(p=c;p<=c+strlen(c)-1;++p)
	{
		if(*p>='0'&&*p<='9'&&*(p+1)>='0'&&*(p+1)<='9')
			cout<<*p;
		if(*p>='0'&&*p<='9'&&(*(p+1)<'0'||*(p+1)>'9'))
			cout<<*p<<endl;
	}
	return 0;
}
