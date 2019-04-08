int main()
{
	char c[35],*p=c;
	gets(c);
	for(;*p!='\0';p++)
	{
		if(*p<='9'&&*p>='0')
			cout<<*p;
		else {
			if(*(p+1)<='9'&&*(p+1)>='0')
				cout<<endl;
			else continue;
		}
	}
	
	return 0;
}