int N;
int TJ[MAX];
int QW[MAX];
int main()
{
	int i, j, lt, rt, lq, rq;
	while( scanf("%d",&N) )
	{
		if( N == 0 )  break;
		for( i = 0; i < N; i++ )  scanf("%d",TJ+i);
		for( i = 0; i < N; i++ )  scanf("%d",QW+i);
		sort(TJ,TJ+N);
		sort(QW,QW+N);
		lt = 0; rt = N-1; lq = 0; rq = N-1; j = 0;
		while( lt <= rt )
		{
			if( TJ[lt] > QW[lq] )
			{
				j += 200;
				lq++;
				lt++;
			}
			else if( TJ[rt] > QW[rq] )
			{
				j += 200;
				rt--;
				rq--;
			}
			else
			{
				if( TJ[lt] < QW[rq] )  j -= 200;
				lt++;
				rq--;
			}
		}
		printf("%d\n",j);
	}
}
