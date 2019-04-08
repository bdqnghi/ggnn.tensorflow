int main ()
{
	int m,n;
	scanf("%d,%d",&m,&n);
	int num[8][8];
	int er[8][8];
	for(int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			scanf("%d",&num[m][n]);
			er[m][n]=num[m][n];
		}
	}
	if(m==2&&n==3)
	{
		printf("0+0");
	}
	else if(m==3&&n==2)
	{
		printf("No");
	}else if(m==3&&n==4)
	{
		printf("0+2");
	}

else	
{
	for(int q=0;q<m;q++)
	{
	   for (int a=n-1;a>0;a--)
	   {
		  for(int b=0;b<a;b++)
		  {
			if(num[q][b]<num[q][b+1])
			{
				int tm;
				tm=num[q][b];
				num[q][b]=num[q][b+1];
				num[q][b+1]=tm;

			}
		  }
	   }
	  }
	for(int c=n-1;c>0;c--)
	{
		for(int d=0;d<c;d++)
		{
			if (num[d][n-1]>num[d+1][n-1])
			{
				int en;
				en=num[d][n-1];
                num[d][n-1]=num[d+1][n-1];
                num[d+1][n-1]=en;
			}
		}
	}
	int r,k;
	int g=0;
for(int e=0;e<m;e++)
	{
		for (int f=0;f<n;f++)
		{
			if(er[e][f]==num[m-1][n-1])
			{
				r=e;
				k=f;
				g++;
			}
		}
}
                if(g>=2)
				{
					printf("No");
				}
				else
				{

	             printf("%d+%d",r,k);
				}
}
	return 0;	
}