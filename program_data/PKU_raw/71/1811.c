


int run ( int x )
{
	if ( (x % 400 ==0) || ( (x % 4 == 0 )&& (x % 100 != 0 )) )
		return 0 ;
	else return 1 ;
}
int main()
{
	int i , n , j , day = 0 ;
	scanf("%d", &n);
	for ( i = 0 ; i < n ; i ++)
	{
		int year , mona ,monb , max , min;
		int run(int x);
		scanf ("%d %d %d" , &year , &mona , &monb);
		if (mona > monb)
		{
			max = mona ;
			min = monb ;
		}
		else 
		{
			max = monb ;
			min = mona ;
		}
		if ( run(year) == 0 )
		{
			for ( j = min ; j < max ; j ++)
			{
				if ( j == 2)
				{
					day += 29;
				}
				else if ( j == 4 || j == 6 || j == 9 || j == 11) 
				{day += 30 ;}
				else {day += 31;}
				
			}	
		}
		if ( run(year) == 1 )
		{
			for ( j = min ; j < max ; j ++)
			{
				if ( j == 2)
				{
					day += 28;
				}
				else if ( j == 4 || j == 6 || j == 9 || j == 11) 
				{day += 30 ;}
				else {day += 31;}
				
			}	
		}

		if ( day % 7 == 0 )  printf("YES\n");
		else printf("NO\n");
		day = 0 ;




	}
	return 0 ;
}

