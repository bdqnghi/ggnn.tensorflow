int main()
{
	int a[6];
	int i , p1, p2 ;
	int flag[6] = {0} ;
	int p;
	p =1;

	for( a[1] = 1; a[1] <= 5 ; a[1] ++)
	{
		for( a[2] = 1 ; a[2] <= 5 ; a[2] ++)
		{   
			if(a[2] == 2)
			for(a[3] =1; a[3] <= 5 ; a[3] ++)
			{
				for( a[4] = 1 ;a[4] <= 5; a[4] ++)
				{
					for( a[5] =1 ; a[5] <= 5;a[5] ++)
					{
						if(a[5] == 2 || a[5] == 3) continue;; 
						
						for( i =1 ;i <= 5; i ++)
							flag[a[i] ] ++;
						for(i = 1 ;i <= 5; i ++)
						{
							if( flag[i] != 1)
							{
								p = 0 ;
								break;
							}
						}
					    if( p == 1)
						{
							for( i =1 ;i <= 5 ;i++)
							{
								if(a[i] == 1) 
									p1 = i;
								else if(a[i] == 2)
									p2 = i;
							}
							if( ( p1 == 3 && a[1] == 5 ) || ( p1 == 4 ) )
							{
								if( (p2 == 1 && a[5] == 1 ) || (p2 == 2) || ( p2 == 3 && a[1] == 5) || (p2 == 4 && a[3] != 1) || (p2 == 5 && a[4] == 1) )
								{
								 p = (a[5] ==1) + (a[1] == 5 ) + (a[3] != 1) + (a[4] == 2);
								 if( p == 1 && a[1] == 5)
								 {
									 printf("%d" ,a[1]);
								  for(i = 2 ; i<= 5 ;i++)
									 printf(" %d" ,a[i]);
								  printf("\n");
								 }
								}
							}
						}
						for(i = 1 ; i <= 5 ;i++)
							flag[i] = 0;
						p =1;
					}
				}
			}
		}
	}
	return 0;
}







					  
                    
					 
