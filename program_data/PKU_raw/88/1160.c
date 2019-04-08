int main()
{
	int n=0;
	char c[31]={0};
	char *p=c;
	cin.getline(c,31);
	for(p=c;p<c+strlen(c);p++)
	{
		if(*p=='0')
			cout<<0<<endl;
		else if(*p>'0'&&*p<='9')
		{
			cout<<atoi(p)<<endl;
			while(n==0)
				if(*(p+1)>='0'&&*(p+1)<='9')
					p++;
				else
					n=1;
		}
		n=0;
	}
	return 0;
}