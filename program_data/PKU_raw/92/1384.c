
void main()
{
	int m,l,qww_fast,tj_fast,qww_slow,tj_slow,n,game,win,turn;
	int qww[2000],tj[2000],out[300];
	for (game=0;;game++)
	{
		scanf("%d",&n);
		if (n==0) break;
		for (m=0;m<n;m++)
			scanf("%d",&tj[m]);
		for (l=0;l<n;l++)
			scanf("%d",&qww[l]);
		for (m=0;m<n;m++)
			for (l=0;l<n-m-1;l++)
			{
				if (tj[l]<tj[l+1])
				{
					turn=tj[l];
					tj[l]=tj[l+1];
					tj[l+1]=turn;
				}
			}
		for (m=0;m<n;m++)
			for (l=0;l<n-m-1;l++)
			{
				if (qww[l]<qww[l+1])
				{
					turn=qww[l];
					qww[l]=qww[l+1];
					qww[l+1]=turn;
				}
			}
		for (win=0,tj_slow=n-1,qww_slow=n-1,tj_fast=0,qww_fast=0;tj_slow>=tj_fast;)
		{
			if(tj[tj_slow]>qww[qww_slow])
			{
				win++;
				tj_slow--;
				qww_slow--;
			}
			else if (tj[tj_slow]<qww[qww_slow])
			{
				win--;
				tj_slow--;
				qww_fast++;
			}
			else
			{
				if (tj[tj_fast]>qww[qww_fast])
				{
					win++;
					tj_fast++;
					qww_fast++;
				}
				else if(tj[tj_fast]<qww[qww_fast])
				{
					win--;
					tj_slow--;
					qww_fast++;
				}
				else
				{
					if (tj[tj_slow]<qww[qww_fast])
					{
						win--;
					}
					qww_fast++;
					tj_slow--;
				}
			}
		}
		out[game]=win*200;
	}
	for(m=0;m<game;m++)
		printf("%d\n",out[m]);
}

