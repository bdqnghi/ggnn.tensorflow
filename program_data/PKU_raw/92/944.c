
int tianji[1000];
int qiwang[1000];
int comp(const void * a, const void * b)
{
	return *(int *)b - *(int *)a;
}
int main(void)
{
	int comp(const void * a, const void * b);
	int n;
	cin>>n;
	int i,j;
	while(n!=0)
	{
		for(i = 0; i < n; i++)
			cin>>tianji[i];
		for(i = 0; i < n; i++)
			cin>>qiwang[i];
		qsort(tianji,n,sizeof(int),comp);
		qsort(qiwang,n,sizeof(int),comp);
		j = 0;
		int score = 0;
		int index1 = 0;
		int index2 = n-1;
		int index3 = 0;
		int index4 = n-1;

		while(index1 <= index2)
		{
			if( tianji[index1] > qiwang[index3] )
			{
				score = score + 200;
				index1 = index1 + 1;
				index3 = index3 + 1;
			}
			else
			{
				if( tianji[index1] < qiwang[index3] )
				{
					score = score - 200;
					index3 = index3 + 1;
					index2 = index2 - 1;
				}
				else
				{
					if( tianji[index2] > qiwang[index4] )
					{
						score = score + 200;
						index2 = index2 - 1;
						index4 = index4 - 1;
					}
					else
					{
						if( tianji[index2] < qiwang[index3])
						{
							score = score - 200;
							index2 = index2 - 1;
							index3 = index3 + 1;
						}
						else
						{
							break;
						}
					}
				}
			}
		}
		cout<<score<<endl;
		cin>>n;
	}
	return 0;
}