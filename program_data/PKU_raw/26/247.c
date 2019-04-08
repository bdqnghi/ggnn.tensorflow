int main()
{
	char a[100],b[100];
	cin.getline(a,100);
	char *p=a,*q=b;
	for(;*p!='\0';)
	{
	if(*p==' '&&*(p+1)!=' ')
	{*q=' ';q++;p++;}
	else if(*p==' '&&*(++p)==' ')
	{
	}
	else
	*q++=*p++;
}
*q='\0';
cout<<b;
return 0;
}
