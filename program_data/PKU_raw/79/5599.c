

int main()
{
	int n;
	int m;
	do
	{
		int *p;
		scanf("%d %d",&n,&m);
		if ( n == 0 )
		{
			break;
		}
		p = ( int * ) malloc ( sizeof (int) * n );

		int i = 0 ;
		for ( i = 0 ; i < n ; i++ )
		{
			*(p+i) = 1 ;
		}
		int count = 0;
		int count2 = n;
		i = 0;
		do
		{
			if ( *(p+i) != 0 )
			{
				count++;
				if ( count == m )
				{
					//printf("%d\n",i);
					count2--;
					count = 0;
					*(p+i) = 0;
				}
			}
			if ( i < n - 1 )
			{
				i++;
			}
			else
			{
				i = 0;
			}
			//printf("%d\n",i);
		}while(count2 > 1);
		i = 0 ;
		do
		{
			if ( *(p+i) == 1 )
			{
				printf("%d\n",i+1);
				break;
			}
			i++;
		}while ( i < n );
		free(p);
	}while ( n > 0 );
	return 0;
}