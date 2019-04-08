
int main()
{
 	char str[510];
 	int len = 0, x, y;
 	
 	cin >> str;
 	len = strlen(str);
 	for ( int i = 1; i < len; i++ )
 	{
  	    for ( int j = 0; j < len - i; j++ )
  	    {
  		 	for ( x = j, y = j + i; x < y; x++, y-- )
  		 	{
	  	  	 	if ( str[x] != str[y] )
	  	  	 	   break;
			}

			if ( x >= y )
   			{
  	   		    for ( int m = j; m <= j + i; m++ )
  	   		    	cout << str[m];
  	   		    cout << endl;	
		 	}
  		}
  	}
  	return 0;
}