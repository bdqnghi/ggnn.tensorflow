
int main()
{
 	char str1[1000], str2[1000];
 	int a[200] = {0}, b[200] = {0}, len;
 	int x, y;
 	
 	cin >> str1 >> str2;
 	
 	if ( strlen(str1) != strlen(str2) )
 	{
	    cout << "NO" << endl;
		return 0; 
    }
    
    len = strlen(str1);
    
    for ( int i = 0; i < len; i++ )
    {
 	 	x = str1[i] - 0;
 	 	y = str2[i] - 0;
 	 	a[x]++;
 	 	b[y]++;
    }
    for ( int j = 0; j < 200; j++ )
    {
 	 	if ( a[j] != b[j] )
	   	{
 	   	   cout << "NO" << endl;
 	   	   return 0;
		}
	}
    cout << "YES" << endl;
    return 0;
}
