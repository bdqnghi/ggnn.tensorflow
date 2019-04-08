int main()
{
	char c[31]={0};
	char *p=c;
	cin.getline(c,31);
	for(p=c;p<c+strlen(c);p++)
	{
		if(*p=='0')               //0???
			cout<<0<<endl;
		else if(*p>'0'&&*p<='9')  //??????
		{
			cout<<atoi(p)<<endl;
			while(*(p+1)>='0'&&*(p+1)<='9')
				p++;   //??????
		}
	}
	return 0;
}