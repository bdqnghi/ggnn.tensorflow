
int main()
{   
	char a[10000];
	gets( a );

	int flag=0;
	int i;

	for ( i=0;a[i]!='\0';i++)
	{
		if( flag ==0 )
		{
			cout << a[i] ;
			if( a[i] ==' ')
				flag = 1;
		}
		else if ( (flag==1)&&(a[i]!=' ')  )
		{
			cout << a[i];
			flag = 0;
		}
	}

	cout << endl;
	return 0;
}
