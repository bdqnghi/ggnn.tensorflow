int main()
{
	char *p,*q,*r;
	char str[30];
	gets(str);
	for(p=str;*p!='\0';)
	{
		if(*p>='0'&&*p<='9'&&*(p-1)!='-')
		{
			q=p;
			while(*q>='0'&&*q<='9')
			{ q++;}
	        for(r=p;r<q;r++)
				cout<<*r;
			cout<<endl;
			p=q;
		}
		else p=p+1;
	}
	return 0;
}
