int main()
{
 int n ,sum;
 int i , j , k ;
 int a[101][101] ={0};
 int lenth , min ;
 
 scanf("%d",&n);
	for(i =1 ; i <= n ; i ++)
	{   
		sum = 0;
		lenth = n;
		
		for(j = 1 ; j <= n ; j ++)
			for( k = 1 ; k <= n ; k ++)
				scanf("%d",&a[j][k]);

		for(lenth = n ; lenth > 1 ; lenth --)
		{
			for( j = 1 ;j <= lenth ; j++)
			{
				min = 1000;
				for(k = 1 ; k <= lenth ; k ++)
				{   
					if(a[j][k] < min )
						min = a[j][k];
				}
			    for( k = 1; k <= lenth ; k++)
					if( a[j][k] != 0)
						a[j][k] = a[j][k] - min ; 
			}
			for( j = 1 ;j <= lenth ; j++)
			{
				min = 1000;
				for(k = 1 ; k <= lenth ; k ++)
				{   
					if(a[k][j] < min )
						min = a[k][j];
				}
			    for( k = 1; k <= lenth ; k++)
					if( a[k][j] != 0)
						a[k][j] = a[k][j] - min ; 
			}
			sum = sum + a[2][2];
		    
			for( j = 1; j <= lenth ; j ++)
				for(k =2; k <= lenth ; k++)
					a[j][k] = a[j][k+1];
			for( j = 2; j <= lenth ; j ++)
				for(k =1; k <= lenth ; k++)
					a[j][k] = a[j + 1][k];
		}
		printf("%d\n",sum);
	}
	 
	
 return 0;
}



			





					  
                    
					 


	 
			
			
			
			
			
			
			
			
			
			
			
			
			



				   
        