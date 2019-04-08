
int main()
{
	int i,j,COUNT=0,m[300],n[300],STAT[300][300],sum[300],SUM[300];
	/*??m,n*/
	for(i=0;i<300;i++)
	{
		scanf("%d%d",&n[i],&m[i]);
		COUNT++;
		sum[i]=0;
		SUM[i]=n[i];
		if(m[i]==0&&n[i]==0)
		{
			break;
		}
	}

	for(i=0;i<COUNT-1;i++)
	{
		for(j=0;j<n[i];j++)
		{
			STAT[i][j]=1;              //???STAT;
		}
		while(SUM[i]>1)
		{
			for(j=0;j<n[i];j++)
			{
				sum[i]+=STAT[i][j];
			    if(sum[i]==m[i])
				{
				   sum[i]=0;          
				   STAT[i][j]=0;
				   SUM[i]=SUM[i]-1;   //??m[i]???;
				}
			    if(SUM[i]==1)
				{
					break;
				}
			}
		}
		for(j=0;j<n[i];j++)
		{
			if(STAT[i][j]==1)
			{
				printf("%d\n",j+1);    //??;
			}
		}
	}
    return 0;
}