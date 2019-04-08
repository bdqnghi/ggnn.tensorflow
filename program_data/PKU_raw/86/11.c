
int main()
{
	struct tiao
	{
		int *ln;
		int k;
		int sumt;
	}*tiao1;
	int n;
	scanf("%d",&n);
	tiao1 = ( struct tiao *) malloc ( sizeof ( struct tiao ) * n );
	int i;
	int j;
	int f = 0;
	for ( i = 0 ; i < n ; i++ )
	{
		f = 0;
		scanf("%d",&tiao1[i].k);
		tiao1[i].ln = ( int * ) malloc ( sizeof ( int ) * tiao1[i].k );
		tiao1[i].sumt = 0;
		for ( j = 0 ; j < tiao1[i].k ; j++ )
		{
			scanf("%d",&tiao1[i].ln[j]);
		}
		if ( tiao1[i].k == 0 )
		{
			printf("60\n");
			continue;
		}
		for ( j = 0 ; j < tiao1[i].k ; j++ )
		{
			tiao1[i].sumt = ( tiao1[i].ln[j]+3*(j) );
			if ( tiao1[i].sumt >= 60 )
			{
				int tmp1;
				tmp1 =	tiao1[i].ln[j-1]+3*(j) ;
				if ( tmp1 >= 60 )
				{
					printf("%d\n",tiao1[i].ln[j-1]);
				}
				if ( tmp1 < 60 && 60 - tmp1 > 3 )
				{
					tmp1 = 60 - tmp1 + tiao1[i].ln[j-1];
					printf("%d\n",tmp1);
				}
				if ( tmp1 < 60 && 60 -tmp1 < 3 )
				{
					printf("%d\n",tiao1[i].ln[j-1]);
				}
				break;
			}
		}
		if ( tiao1[i].sumt < 57 )
		{
			tiao1[i].sumt += 3;
			j--;
			printf("%d\n",(60-tiao1[i].sumt+tiao1[i].ln[j]));
		}
		if ( tiao1[i].sumt < 60 && tiao1[i].sumt > 57 )
		{
			printf("%d\n",tiao1[i].ln[j-1]);
		}
	}
	return 0;
}