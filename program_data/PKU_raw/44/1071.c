

void reverse( int x )
{
	int i , j ;
	char s[10] ;
	if ( x >= 0 )
	{
		sprintf(s , "%d" , x );
		for ( i = sizeof(s)-1 ; i >= 0 ; i --)
		{
			if ( s[i] > '0' && s[i] <= '9')
			{
				for ( j = i ; j >= 0 ; j --)
					printf("%c" , s[j]);
				break ;
			}
		}
	}
	else 
	{
		printf("-");
		reverse(-x);
	}
}

int main(int argc, char* argv[])
{
	int i , num ;
	for ( i = 0 ; i < 6 ; i ++)
	{
		scanf("%d", &num);
		reverse(num);
		printf("\n");
	}
	return 0;
}
