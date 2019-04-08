int main()
{
	int n , i , j;
	char a[82];
	char *p = a;
	cin >>n;
	getchar();                         //???? 
	for ( i = 1 ; i <= n ; i++)
	{
		p = a;
		gets(a);                     //?? 
		for (j = 0 ; j < strlen(a) ; j++ , p++)
		{
			if ( *p == '_' || (*p >= 'a' && *p<='z') || (*p >= 'A' && *p<='Z') )     //????????ok 
				continue;
			if (j!=0 && *p>='0' && *p<='9')         //????????? 
				continue;
			break;
		}
		if (j == strlen(a))
			cout<<"1"<<endl;
		else
			cout<<"0"<<endl;
	}
	return 0;
}

