

void jin ( char *ci,char *ai ,int k)
{
	if ( k != 0 )
	{
		//printf("k-1%d\n",k-1);
		ai[k] -= 10;
		ai[k-1]++;
		if ( ai[k-1] < 58 && ai[k-1] >=48)
		{
			//printf("diaoyong\n");
			return;
		}
		else if ( ai[k-1] >= 58 && k != 0)
		{
			jin ( ci,ai,k-1);
		}
	}
	if ( k == 0)
	{
		//printf("diaoyong\n");
		ai[k] -= 10;
		ci[0] = 49;
	}
}

void jin2 ( char *ci,char *bi ,int j)
{
	if ( j != 0 )
	{
		//printf("k-1%d\n",k-1);
		bi[j] -= 10;
		bi[j-1]++;
		if ( bi[j-1] < 58 && bi[j-1] >=48)
		{
			//printf("diaoyong\n");
			return;
		}
		else if ( bi[j-1] >= 58 && j != 0)
		{
			jin ( ci,bi,j-1);
		}
	}
	if ( j == 0)
	{
		//printf("diaoyong\n");
		bi[j] -= 10;
		ci[0] = 49;
	}
}



int main()
{
	char a[n];
	char b[n];
	char *ai;
	char *bi;
	char *ci;
	ai = &a[0];
	bi = &b[0];
	scanf("%s",ai);
	scanf("%s",bi);
	int i = 0;
	int k = 0;
	do
	{
		if ( a[i] != '\0' )
		{
			i++;
		}
	}while( a[i] != '\0');
	k = i;
	int j;
	i = 0;
	do
	{
		if ( b[i] != '\0' )
		{
			i++;
		}
	}while( b[i] != '\0');
	j = i;
	if ( k >= j )
	{
		ci = (char*) malloc( (k+2) * sizeof(char));
		ci[k+1] = '\0';
		for ( ; k >= 1 ;k--,j-- )
		{
			if ( j >= 1 )
			{
				ci[k] = a[k-1] + b[j-1] -48;
				if ( ci[k] >= 58 )
				{
					ci[k] -= 10;
		            if ( k != 1)
					{
						ai[k-2]++;
						if ( ai[k-2] >= 58 )
						{
							jin ( ci,ai, k-2 );
						}
					}
					if ( k == 1 )
					{
						ci[0] = 49;
					}
				}
			}
			else if ( j < 1 )
			{
				ci[k] = a[k-1];
			}
		}
		i = 0;
		int l = 0;
		do
		{
			if ( ci[i] >= 49 && ci[i] <= 57 && ci[i] != '\0' && l == 0)
			{
				printf("%c",ci[i]);
				l++;
				i++;
			}
			else if ( ci[i] >= 48 && ci[i] <= 57 && ci[i] != '\0' && l == 1)
			{
				printf("%c",ci[i]);
				i++;
			}
			else
			{
				i++;
			}
		}while( ci[i] != '\0');
		printf("\n");
		free(ci);
	}
	if ( k < j )
	{
		ci = (char*) malloc( (j+2) * sizeof(char));
		ci[j+1] = '\0';
		for ( ; j >= 1 ;j--,k-- )
		{
			if ( k >= 1 )
			{
				ci[j] = b[j-1] + a[k-1] -48;
				if ( ci[j] >= 58 )
				{
					ci[j] -= 10;
		            if ( j != 1)
					{
						bi[j-2]++;
						if ( bi[j-2] >= 58 )
						{
							jin2 ( ci,bi, j-2 );
						}
					}
					if ( j == 1 )
					{
						ci[0] = 49;
					}
				}
			}
			else if ( k < 1 )
			{
				ci[j] = b[j-1];
			}
		}
		i = 0;
		int l = 0;
		do
		{
			if ( ci[i] >= 49 && ci[i] <= 57 && ci[i] != '\0' && l == 0)
			{
				printf("%c",ci[i]);
				l++;
				i++;
			}
			else if ( ci[i] >= 48 && ci[i] <= 57 && ci[i] != '\0' && l == 1)
			{
				printf("%c",ci[i]);
				i++;
			}
			else
			{
				i++;
			}
		}while( ci[i] != '\0');
		printf("\n");
		free(ci);
	}
	return 0;
}