void main()
{
	int tianfast,tianslow,qifast,qislow,tianhorse[1000],qihorse[1000];
	int button,swap,i,j,n;
	long win,lost,money;
	button=0;
	while (1)
	{
	scanf("%d",&n);
	if (n>0)
	{
		for (i=0;i<=n-1;i++) scanf("%d",&tianhorse[i]);
		for (i=0;i<=n-1;i++) scanf("%d",&qihorse[i]);

		for (i=0;i<n-1;i++)
		for (j=0;j<n-1-i;j++)
		{
			if (tianhorse[j]<tianhorse[j+1])
			{
				swap=tianhorse[j];
				tianhorse[j]=tianhorse[j+1];
				tianhorse[j+1]=swap;
			}
			if (qihorse[j]<qihorse[j+1])
			{
				swap=qihorse[j];
				qihorse[j]=qihorse[j+1];
				qihorse[j+1]=swap;
			}
		}

		win=lost=0;
		tianfast=qifast=0;
		tianslow=qislow=n-1;
		while (tianfast<=tianslow)
		{
			if (tianhorse[tianfast]>qihorse[qifast])
			{
				tianfast++;
				qifast++;
				win++;
			}
			else
				if (tianhorse[tianfast]<qihorse[qifast])
				{
					tianslow--;
					qifast++;
					lost++;
				}
				else 
					if (tianhorse[tianslow]>qihorse[qislow])
					{
						tianslow--;
						qislow--;
						win++;
					}
					else 
						if (tianhorse[tianslow]<qihorse[qislow])
						{
							tianslow--;
							qifast++;
							lost++;
						}
						else
						{
							if (tianhorse[tianslow]<qihorse[qifast]) lost++;
							else if (tianhorse[tianslow]>qihorse[qifast]) win++;
							tianslow--;
							qifast++;
						}
		}
		money=(win-lost)*200;
		if (button==0)
		{
			printf("%d",money);
			button=1;
		}
		else printf("\n%d",money);
	}
	if (n==0) break;
	}
}