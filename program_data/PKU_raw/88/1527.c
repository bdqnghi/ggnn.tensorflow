int main()
{
    char z[30],*p;
	gets( z );
	p=z;
	int i;
	for ( i=0 ; z[i]!='\0' ; i++ )
	{
		if ( *(p+i)>='0'&&*(p+i)<='9' )
		{
			if ( ( *(p+i-1)>'9'||*(p+i-1)<'0' )&&i!=0 )
				cout<<endl;
			cout<<*(p+i);
		}
	}
	cout<<endl;
	return 0;
}
