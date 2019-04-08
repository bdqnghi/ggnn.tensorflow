
int main()
{
	int m=0,i;
	char str[100];
	char *p=NULL;
	gets(str);
	p=str;
	for ( i=0;i<strlen(str);i++)
		{
			if ( *p == ' ' && m == 1 );
			else
				cout << *p;
			if ( *p == ' ' )
				m=1;
			else
				m=0;
			*p++;
		}
	return 0;
}