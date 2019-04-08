int main()
{
	int a[100][100],b[100][100];
	int q,w,e,r,i,j,sum=0,k,flag=0;
	scanf("%d %d",&q,&w);
	for(i=0;i<q;i++)
	{
		for(j=0;j<w;j++)
		{
             scanf("%d",&a[i][j]);
		}
	}
	scanf("%d %d",&e,&r);
	for(i=0;i<e;i++)
	{
		for(j=0;j<r;j++)
		{
             scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<q;i++)
	{
		for(j=0;j<r;j++)
		{
			
			for(k=0;k<w;k++)
			{
				sum=sum+a[i][k]*b[k][j];
				
			}
			if(flag==0)
			{
				printf("%d",sum);
				flag=1;
			}
			else
			{
                printf(" %d",sum);
			}
			sum=0;
			
		}
		printf("\n");
		flag=0;


	}
	return 0;

}
