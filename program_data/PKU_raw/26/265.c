int main()
{
	char a[101];
	cin.getline(a,101);
	int length = strlen(a);
	char *p = a;
	int flag = 0;
	for(int i = 1 ; i<=length ; i++ , p++)
	{
		if(*p!=' ')
		{
			cout<<*p ;
			flag = 0 ;
		}
		if((*p==' ')&&(flag==0))
		{
			cout<<*p ;
			flag = 1 ;
		}
	}
	return 0 ;
}


