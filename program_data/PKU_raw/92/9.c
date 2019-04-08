
int tian[1000],wang[1000],temp[1000];

int cmp( const void *a,const void *b )
{
	return *(int*)a- *(int*)b;
}

int main()
{
	int n;
	while(1)
	{
		int i,num = 0,t_first,q_first,t_last,q_last;
		scanf("%d",&n);
		if( n == 0 )
			break;

		for( i = 0;i < n;i++ )
			scanf("%d",&tian[i]);
		for( i = 0;i < n;i++ )
			scanf("%d",&wang[i]);

		qsort( tian,n,sizeof(int),cmp );
		qsort( wang,n,sizeof(int),cmp );

		t_first = q_first = 0;
		t_last = q_last = n-1;
		while( t_last >= t_first )
		{
			if( tian[t_first] > wang[q_first] )
			{
				num++;
				t_first++;
				q_first++;
			}
			else if( tian[t_first] < wang[q_first] )
			{
				num--;
				t_first++;
				q_last--;
			}
			else
			{
				if( tian[t_last] > wang[q_last] )
				{
					num++;
					t_last--;
					q_last--;
				}
				else if( tian[t_last] < wang[q_last] )
				{
					num--;
					t_first++;
					q_last--;
				}
				else
				{
					if( tian[t_first] < wang[q_last] )
						num--;
					t_first++;
					q_last--;
				}
			}
		}
		
		printf("%d\n",num*200);
	}
	return 0;
}