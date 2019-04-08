
int main()
{
	char a[1000];
	gets(a);
	for(char *p=a;*p!='\0';p++)
	{
		if(*p==' '&&*(p+1)==' ')
		{

		}
		else
			cout<<*p;
	}
	return 0;
}