
int main()
{
	char mystring[101];
	gets(mystring);
	char * p=mystring;
	for (;*p!='\0';p++)
	{
		if (p==mystring) cout<<*p;
		else if (*p!=' ') cout<<*p;
		else if (*(p-1)!=' ') cout<<*p;
	}
	return 0;
}