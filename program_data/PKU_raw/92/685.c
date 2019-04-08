
int cmp(const void *a, const void *b)
{
	return *(int*)b - *(int*)a;
}
int main()
{
	int t[1000], w[1000];
	int N;
	int i,k,l,win,re;
	int tfast, tslow, wfast, wslow;
	while (scanf("%d", &N) && N != 0)
	{
		for (l = 0; l < 1000; l++)
		{
			t[l] = 0;
			w[l] = 0;
		}
		for (i = 0; i < N; i++)
		{
			scanf("%d", &t[i]);
		}
		for (i = 0; i < N; i++)
		{
			scanf("%d", &w[i]);
		}
		qsort(t, N, sizeof(int), cmp);
		qsort(w, N, sizeof(int), cmp);
		win = 0;
		tfast = 0;
		wfast = 0;
		tslow = N - 1;
		wslow = N - 1;
		for (i = 0; i<N; i++)         
		{
			if (t[tfast] == w[wfast])    
			{
				if (t[tslow]>w[wslow])
				{ 
					win++; tslow--; wslow--; 
				}
				else if (t[tslow]<w[wslow])
				{
					win--; tslow--; wfast++; 
				}
				else if (t[tslow] == w[wslow])
				{
					if (t[tslow]<w[wfast])
					{
						win--; tslow--; wfast++; 
					}
					else if (t[tslow] == w[wfast])
					{
						break; 
					}
				}
			}
			else if (t[tfast]>w[wfast])     
			{
				win++; tfast++; wfast++;
			}
			else    
			{ 
				win--; tslow--; wfast++; 
			} 
		}
		printf("%d\n", win*200);
		}
		

}