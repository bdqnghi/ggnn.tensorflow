int Tj[1001]={0};
int Qw[1001]={0};
int cmp( const void *a, const void *b )
{
	return (*( int *)a - *( int *)b );
}
int main()
{
	int N,i,j;
	int temp=200,count=0;
	while( cin>> N && N!=0 )
	{
			count=N;
			int start1=0,start2=0,end1=N-1,end2=N-1;
			int win=0,lose=0;
		for( i=0; i< N; i++ )
		{
			cin>> Tj[i];
		}
		qsort(Tj,N,sizeof( int ),cmp );
	
		for( i=0; i< N; i++ )
			cin>> Qw[i];
		qsort(Qw,N,sizeof( int ),cmp );
		while( count--)
		{
			if( Tj[start1] > Qw[start2] )
			{
				start1++;
				start2++;
				win++;
			}
			else if( Tj[end1] > Qw[end2] )
			{
				end1--;
				end2--;
				win++;
			}
			else if( Tj[start1] < Qw[start2] )
			{
				start1++;
				end2--;
				lose++;
			}
			else if( Tj[end1] < Qw[end2] )
			{
				start1++;
				end2--;
				lose++;
			}
			else if( Tj[end1] == Qw[end2] )
			{
				if( Tj[start1] < Qw[end2] )
				{
					start1++;
					end2--;
					lose++;
				}
			}
		}

	
      int sum= temp* ( win-lose );
	  cout<<sum<<endl;
	}
	return 0;
}