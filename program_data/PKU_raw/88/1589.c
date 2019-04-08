int main()
{
	char a[31] ;
	cin.getline(a , 31) ;
	int length = strlen(a) ;
	int flag = 0 ;
	char *p = a ;
	for(int i = 0 ; i<length ; i++ , p++)
	{
		if(!(((int)*p>='0')&&((int)*p<='9')))
		{
			 if(flag == 0)	
				cout<<endl ;
			flag = 1 ;
		}
		else
		{
			cout<<*p ;
			flag = 0 ;
		}
	}
	return 0 ;
}
			