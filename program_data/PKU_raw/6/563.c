int main()
{
	int i,j,k,r,c,n;
	int s[100][100];
	int sum[100];
	int sumr,sumc;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		sum[i]=0;
		sumr=0;
		sumc=0;
		scanf("%d %d",&r,&c);
		for(j=0;j<r;j++)
			for(k=0;k<c;k++)
				scanf("%d",&s[j][k]);
			if(r!=1&&c!=1)
			{
			for(k=0;k<c;k++)
			sumr+=s[0][k]+s[r-1][k];
			for(j=0;j<r;j++)
				sumc+=s[j][0]+s[j][c-1];
			sum[i]=sumr+sumc-s[0][0]-s[0][c-1]-s[r-1][0]-s[r-1][c-1];
			}
		 if(r==1&&c!=1)
				for(k=0;k<c;k++)sum[i]+=s[0][k];
				if(c==1&&r!=1)
					for(j=0;j<r;j++)sum[i]+=s[j][0];
					if(c==1&&r==1)sum[i]=s[0][0];
	}
	      for(i=0;i<n;i++)
		printf("%d\n",sum[i]);
			return 0;
}

				
			

			
