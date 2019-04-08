
struct missle
{
	int id;
	int h;
}*p,tmp;
int max = 0;

int maxn(int i ,int n);
int pass (int pre,int aft);

int main()
{
	int k;
	scanf("%d",&k);
	p = (struct missle * ) malloc ( sizeof ( struct missle ) * k );
	int i = 0;
	do
	{
		scanf("%d",&p[i].h);
		p[i].id = i;
		i++;
	}while ( i < k );
	int j;
	for ( i = 0 ; i < k ; i++ )
	{
		j = maxn(i,k);
	}

	printf("%d\n",max);
	free(p);

	return 0;
}



int maxn ( int i , int n )
{
	int max2 = 1;
	int re=1;
	int j;
	if ( i == n - 1 )
	{
		max2 = 1;
	}
	else
	{
		for ( j = i + 1 ; j < n ; j++ )
		{
			re = 1;
			if ( pass ( i , j ) == 1 )
			{
				re +=  maxn(j,n);
				if ( re > max2 )
				{
					max2 = re;
				}
			}
		}
	}
	if ( max2 > max )
	{
		max = max2;
		//printf("%d\n",i);
	}
	return max2;
}


int pass (int pre,int aft)
{
	if (p[pre].h >= p[aft].h)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}