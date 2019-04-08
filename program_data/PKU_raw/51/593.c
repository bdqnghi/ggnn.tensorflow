/**  
* @file   homework.cpp  
* @author ??? 
* @date   2013-12-12 
* @description 
*          ??????: n-gram????    
*/ 
int main()
{
	int a ;
	char b[502] ;
	cin >> a;
	cin.get();
	cin.getline(b,502);
	int len = strlen(b);
	char c[502][4] ;
	int i ,j , k;
	for( i = 0 ; i <= len - a ; i++)                 //????
	{
		for( j = 0 ; j < a ; j++)
		{
			c[i][j] = b[i+j] ;
		}
	}
	int d[502] = {0};                                //????
	for( i = 0 ; i < len -a ;i++)
	{
		for( j = i+1 ; j <= len -a ; j++)
		{
			for( k = 0 ; k < a ; k++)
			{
				if(c[i][k] != c[j][k])
					break;
			}
			if(k == a)
				d[i]++;
		}
	}
	int max=INT_MIN;
	for(i = 0 ; i < len -a ; i++)
	{
		if(d[i] >= max)
			max = d[i];
	}
	if(max >= 1)
	{
	    cout << max +1 << endl;
		for(i = 0 ; i < len -a ; i++)
	   {
		    if(d[i] == max)
		   {
			    for(j = 0 ; j < a ; j++)
				     cout << c[i][j] ;
			    cout << endl ;
		   }
	    }
	}
	else
		cout << "NO" ;

	return 0;
}