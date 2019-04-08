int main()
{
	int i, j;
	int x[1000 + 1];
	int y[1000 + 1];
	int flag[1000 + 1]={0};
	char p;
    int number , n;
	int max , sum , a = 0 , k; 
	max = 1;
	number = 1;

	for(i = 1 ; i <= 2 ; i ++)
	{	
		while(1)
		{
			scanf("%c",&p);
			if(p == '\n' || p == ',') 
			{
				
				if(i == 1)
				{
					x[number] = a;
					number ++ ;
				}
				else
				{
					y[number] = a;
					number ++ ; 
				}
				a = 0;
				if( p == '\n') 
					break;
			}
            else   
		    a = a * 10 + p - '0';
		}
		n = number - 1;
		number = 1;
	}

	for( i = 1 ; i <= n ; i ++)
	{
		for( j = x[i] ; j < y[i] ; j ++)
		{
			flag[j] ++;

		}
	}


	for( i = 0 ; i < 1000; i ++)
	{
		if(max < flag[i])
		max = flag[i] ; 
	}
	printf("%d %d\n",n ,max);
	
	return 0;
}
			
