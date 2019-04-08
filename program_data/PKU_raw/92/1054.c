
void sort(int *a,int n)
{
	int i,j,temp;
	for(j=1;j<=n-1;j++)
	{
		for(i=0;i<n-j;i++)
		{
			if(*(a+i)<*(a+i+1))
			{
				temp=*(a+i+1);
				*(a+i+1)=*(a+i);
				*(a+i)=temp;
			}
		}
	}
}

void main()
{
	int n,i,win=0,lose=0,btj,bqw,etj,eqw;
	int *tj,*qw;
	while(1)
	{
		scanf("%d",&n);
		if(n==0)
			break;
		else
		{
			tj=(int*)malloc(n*sizeof(int));
			qw=(int*)malloc(n*sizeof(int));
			for(i=0;i<n;i++)
				scanf("%d",tj+i);
			for(i=0;i<n;i++)
				scanf("%d",qw+i);
			sort(tj,n);
			sort(qw,n);
			btj=bqw=0;
			etj=eqw=n-1;
			while(btj<=etj)
			{
				if(*(tj+btj)>*(qw+bqw))
				{
					win=win+1;
					btj++;
					bqw++;
					continue;
				}
				if(*(tj+etj)>*(qw+eqw))
				{
					win=win+1;
					etj--;
					eqw--;
					continue;
				}
				if(*(tj+btj)<=*(qw+bqw))
				{
					if(*(tj+etj)<*(qw+bqw))
						lose=lose+1;
					bqw++;
					etj--;
					continue;
				}
			}
			printf("%d\n",win*200-lose*200);
			win=lose=0;
		}
	}
}