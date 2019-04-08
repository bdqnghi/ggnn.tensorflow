int main()
{
	char a[201];
	char *p = NULL;
	gets(a);
	p = a;
	int n = strlen(a);
	//cout << n << endl;
	int num = 0;
	for(p = a; p < a+n; p++)
	{
		if( *p == ' ' )
			num ++;
	    if( *p != ' ' && *(p-1) == ' ' )
			num = 0;
		if( num  == 0 || num == 1 )
			cout << *p;
	}
	return 0;
}