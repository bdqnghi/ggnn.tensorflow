int main()
{
	int num[300] = {0} ;
	int n = 0 ;
	cin >> n ;
	int i = 0 ;
	while(i < n)
	{
		cin >> num[i] ;
		i ++ ;
	}
	int p , j , k;
	for(i = 0 ;i< n ;i ++)
	{	
		p = num[i];
		j = i + 1 ; 
		while(j < n)
		{
			if(num[j]==p)//???????
			{
				k = j ;
				while(k<=n-2)
				{
					num[k] = num[k+1] ;
					k++ ;
				}
				n -- ;
			}else
				j ++ ;
		}
	}
	for(j = 0 ;j < n ; j ++)
	{
		if(j==n-1)
			cout<<num[j] ;
		else
			cout<<num[j]<<"," ;
	}
		
}