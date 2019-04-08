int main()
{
    char str[102];
	char *p;
	p=str;
	gets(str);
	int c=strlen(str);
	for(p=str;p<str+c-1;p++ )
	{
	  if(*p==' '&&*(p+1)==' ')continue;               
	  if(*p==' '&&*(p+1)!=' '){cout<<' ';continue;}
	  if(*p!=' '){cout<<*p;}

	}
	cout<<*p;
	return 0;
}