
int main()
{
	int i,m=0;
	char *p=NULL;
	char c[31];
	gets(c);
	p=c;
	for ( i=0;i<strlen(c);i++)
		{
			if ( *p >= '0' && *p <= '9')
				{
					cout << *p;
					m=1;
				}
			else if ( m == 1 )
				{
					cout << endl;
					*p;
					m=0;
				}
			*p++;
		}
	cout << endl;

	return 0;
}
