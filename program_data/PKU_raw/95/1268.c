int main()
{
	char a[85],b[85];
	gets(a);
	gets(b);
	int la,lb,i,t;
	la = strlen(a);
	lb = strlen(b);
	for ( i = 0 ; i < la ; i ++ )
	{
		if( a[i] >= 65 && a[i] <= 90 )
          a[i] += 32;
	}
	for ( i = 0 ; i < lb ; i ++ )
	{
		if( b[i] >= 65 && b[i] <= 90 )
          b[i] += 32;
	}
	if ( la <= lb )
		t = lb;
	else
		t = la;
		for ( i = 0 ; i < t ; i ++ )
		{
			if ( a[i] == b[i] );
			if ( a[i] > b[i] )
			{
				cout<<">"<<endl;
				break;
			}
			if ( a[i] < b[i] )
			{
				cout<<"<"<<endl;
				break; 
			}
			if ( i == t - 1 )
			cout<<"="<<endl;
		}
        return 0;
}