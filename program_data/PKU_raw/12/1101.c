void main()
{
	int i,j,k,time=0,sz[16],tmp,xh,m=0,mp;
	for(xh=0;xh<50;xh++)
	{
		for(i=0;i<16;i++)
		{
			scanf("%d",&sz[i]);
			if(sz[i]==0)
			{
				for(mp=0;mp<i;mp++)
				{
					for(j=0;j<i-1;j++)
					{
						if(sz[j]>=sz[j+1])
						{
							tmp=sz[j];
							sz[j]=sz[j+1];
							sz[j+1]=tmp;
						}
					}
				}
				for(k=0;k<i;k++)
				{
					for(j=k;j<i;j++)
					{
						if(sz[j]==2*sz[k])
						{
							time++;
						}
					}
				}
				printf("%d\n",time);
				i=-1;
				j=0;
				k=0;
				time=0;
				mp=0;
			}
			if(sz[i]==-1)
			{
				m=1;
				break;
			}
		}
		if(m==1)
			break;
	}
}




	
