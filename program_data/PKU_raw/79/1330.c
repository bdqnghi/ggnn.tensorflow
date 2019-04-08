int main()
{
	int num[300] = {0};//??????0 
	int total[300] = {0};//? n
	int countNum[300] = {0};//? m
	int n = 1 ;
	int m = 1 ;
	int nn = 0 ;//?????
	while(n!=0&&m!=0)
	{
		cin >> n >> m ;
		total[nn] = n ;
		countNum[nn] = m ;
		nn ++ ;
	}
	int q ;
	for(q = 0 ; q < nn ; q++)//????
	{
		n = total[q] ;
		m = countNum[q] ;
		int i ;
		for( i= 0 ; i < n ; i ++)
		{
			num[i] = 1 ;//?1???????????
		}
		int p = 0 ;//????????
		int k ;
		int n1 = n ;
		while(n1 > 1)
		{
			for(k = 1 ; k <= m ; k ++)//k??????
			{
				if(k == m)//?m???
				{
					while(num[p] != 1)//????????
					{
						p ++;
						if(p >= n)
							p = 0 ;
					}
					num[p] = 2 ;
					p ++ ;			
					if(p >= n)//????????????
						p = 0 ;
				}else{
					while(num[p] != 1)//????????
					{
						p ++;
						if(p >= n)
							p = 0 ;					
					}
					p++;
					if(p >= n)
						p = 0 ;	
				}
			}
			n1 -- ;		
		}
		for(i = 0 ; i < n ; i ++)
		{
			if(num[i]==1)
				cout<<(i+1)<<endl ;
		}
	}
	
}