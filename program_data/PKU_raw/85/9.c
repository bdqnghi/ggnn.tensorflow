

int main()
{
	int n;
	scanf("%d",&n);
	int i = 0;
	char p[22];
	int j;
	int error;
	do
	{
		scanf("%s",p);
		j = 0;
		error = 0;
		do 
		{
			if ( j == 0 )
			{
				if ( p[j] < 'a' || p[j] > 'z')
				{
					if ( p[j] < 'A' || p[j] > 'Z' )
					{
						if ( p[j] != '_')
						{
							printf("no\n");
							error = 1;
							break;
						}
					}
				}
			}

				
			if ( p[j] < 'a' || p[j] > 'z')
			{
				//printf("a%c\n",p[j]);
				if ( p[j] < 'A' || p[j] > 'Z' )
				{
					//printf("A%c\n",p[j]);
					if ( p[j] < '0' || p[j] > '9' )
					{
						if ( p[j] != '_')
						{
							printf("no\n");
							error = 1;
							break;
						}
					}
				}
			}
			j++;
		}while ( p[j] != '\0' );
		if ( error == 0 )
		{
			printf("yes\n");
		}
		i++;
	}while ( i < n );
	return 0;
}


