
int main()
{
	char a[50];
	char *p = NULL;
	int i,len = 0,l,n,num = 0;
	p = a;
	cin >> n;
	while(cin >> a)
	{
		
		l = strlen(a);
		num ++;
		len += l;
		if ( len > 80 )  
		{
			cout << endl; 
			len = l;
			num = 1;
		}
		else if( num != 1 ) cout <<' ';
		for ( i = 0; i < l; i ++ )
		{
			cout<<*(p + i);
		}
		len ++;
	}
	return 0;
}
