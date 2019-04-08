int main()
{
	int n,i,j,k,t;
	int qw[1001];
	int tj[1001];
	int tjif[1001];
	int qwif[1001];
    scanf("%d",&n);
	int wincount;
	wincount=0;
	int tiecount;
	int r;
	while (n!=0)
	{
		for (i=1;i<=n;i++)
		{
			scanf("%d",&tj[i]);
			tjif[i]=0;
		}
		for (i=1;i<=n;i++)
		{
			scanf("%d",&qw[i]);
			qwif[i]=0;
		}
        for (i=1;i<=n;i++)
		{
			for (j=i+1;j<=n;j++)
			{
              if (tj[i]>tj[j]) 
			  {
				  t=tj[i];
				  tj[i]=tj[j];
				  tj[j]=t;
			  }
			}
		}
         for (i=1;i<=n;i++)
			 {
			for (j=i+1;j<=n;j++)
			{
              if (qw[i]>qw[j]) 
			  {
				  t=qw[i];
				  qw[i]=qw[j];
				  qw[j]=t;
			  }
			}
		 }
         /*intf("now the turn is:\n");
		 for (i=1;i<=n;i++) printf("%d ",tj[i]);
		 printf("\n");
		 for (i=1;i<=n;i++) printf("%d ",qw[i]);
		 printf("\n");*/
         for (i=1;i<=n;i++)
		 {
            for (j=n;j>0;j=j-1)
			{
				if ((qw[j]<tj[i])&&(qwif[j]==0))
				{
					tjif[i]=1;
					qwif[j]=1;
		
					break;
				}
			}
		 }
        wincount=0;
		for (k=1;k<=n;k++)
		{
			if (tjif[k]==1) wincount++;

		}
		tiecount=0;
		for (i=1;i<=n;i++)
		{
			for (j=1;j<=n;j++)
			{
			  if ((tj[i]==qw[j])&&(qwif[j]==0)&&(tjif[i]==0)) 
			  {
				  tjif[i]=1;
				  qwif[j]=1;
				  tiecount++;
			  }
			}	  
		}
        r=200*wincount-200*(n-wincount-tiecount);        
		printf("%ld\n",r);
		scanf("%d",&n);
	}
	return 0;
}