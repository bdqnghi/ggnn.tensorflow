int main()
{
	int l , r , fl , lenth ;
	int i , j , k ;
	char str[100 + 10]; 
    int left[101] , right[101];
	int flag[100 + 10];
	
	while(cin.getline(str, 101))
	{        
		l = 1; r = 1;
		for( lenth = 0 ; str[lenth] != '\0' ; lenth ++)
		{
			if( str[lenth] == '(' ) 
			{
				flag[lenth] = 1;
				left[l ++] = lenth;
			}
			else if( str[lenth] == ')' )
			{
				flag[lenth] = 2;
				right[r ++] = lenth;
			}
			else 	flag[lenth] = 0;
		}
				
		fl = lenth - 1;
		
		for ( j = l - 1 ; j >= 1 ; j --)
			for(k = 1 ; k <= r - 1 ; k ++)
			{
				if(right[k] > left[j])
				{
					flag[ right[k] ] = 0;
					flag[ left[j] ] = 0;
					right[k] = -1;
					break;
				}
			}
		
		for( lenth = 0 ; str[lenth] != '\0' ; lenth ++)
			printf("%c",str[lenth]);
		
			printf("\n");
			
		/*for( j = fl ; j >= 0; j --)
			if(flag[j] != 0) break; */
		
		/*for( i = 0 ; i <= fl ; i ++)
			if(flag[i] != 0 ) break;*/
		
		for( lenth = 0 ; lenth <= fl  ; lenth ++)
		{   
			if(flag[lenth] == 0)     printf(" ");
		    else if(flag[lenth] == 1)	printf("$");
			else if(flag[lenth] == 2)	printf("?");
        }

        printf("\n");
		memset(str,0,sizeof(str));
	}
	
	return 0;
} 


		







