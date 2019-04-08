
void main()
{
	while(1)
	{
		int n,i,j,k,p,temp,win,tie,money;
		int tj[2000],qw[2000];
		scanf("%d",&n);
		if(n==0) break;
		else
		{
		   /*????*/
			for(i=0;i<n;i++)
				scanf("%d",&tj[i]);
			for(i=0;i<n;i++)
				scanf("%d",&qw[i]);
			for(i=0;i<n-1;i++)
				for(j=0;j<n-1-i;j++)
					if(tj[j]<tj[j+1])
					{
						temp=tj[j];
						tj[j]=tj[j+1];
						tj[j+1]=temp;
					}
			for(i=0;i<n-1;i++)
				for(j=0;j<n-1-i;j++)
					if(qw[j]<qw[j+1])
					{
						temp=qw[j];
						qw[j]=qw[j+1];
						qw[j+1]=temp;
					}
			
			/*??*/		
					
			win=tie=0;
			for(i=0,j=0,k=p=n-1;j<=k&&i<=p;)
			{
				if(tj[j]>qw[i])
				{
					win++;
					j++;
					i++;
				}
				else if(tj[k]>qw[p])
				{
					win++;
					p--;
					k--;
				}
				else
				{
					if(tj[k]==qw[i])
						tie++;
					k--;
					i++;
				}
			}
			money=200*(win-(n-win-tie));
			printf("%d\n",money);
		}
	}
}



