int main()
{
	int n,m[100],i,j,sum,c[100][20];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m[i]);
		for(j=1;j<=m[i];j++)
		{
			scanf("%d",&c[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		if(m[i]==0)
			printf("60\n");
		if(m[i]==1)
		{
			if(c[i][1]<=57)
			    printf("57\n");
			if(c[i][1]>57)
				printf("%d\n",c[i][1]);
		}
		if(m[i]>1)
		{
			if((c[i][m[i]]+3*(m[i]))<=60)
			{
				sum=60-3*m[i];
				printf("%d\n",sum);
			}
			else if((c[i][m[i]]+3*(m[i]))<=63)
			{
				printf("%d\n",c[i][m[i]]);
			}
			else if((c[i][m[i]]+3*(m[i]))>63)
			{
				if((c[i][m[i]-1]+3*(m[i]-1))<60)
				{
					sum=60-3*(m[i]-1);
				    printf("%d\n",sum);
				}
		        else if((c[i][m[i]-1]+3*(m[i]-1))<63)
				{
		    	  	printf("%d\n",c[i][m[i]-1]);
				}
				else if((c[i][m[i]-1]+3*(m[i]-1))>63)
				{
					if((c[i][m[i]-2]+3*(m[i]-2))<60)
					{
					    sum=60-3*(m[i]-2);
				        printf("%d\n",sum);
					}
		            else if((c[i][m[i]-2]+3*(m[i]-2))<63)
					{
		        	  	printf("%d\n",c[i][m[i]-2]);
					}
				}
			}
		}
	}
	return 0;
}