int main(void)
{
	int *a=NULL,*b=NULL,*c=NULL;
	int x1=0,x2=0,y1=0,y2=0;
	scanf("%d %d",&x1,&y1);
	a=(int *)malloc(x1*y1*sizeof(int));
	for(int i=0;i<x1;i++)
	{
		for(int j=0;j<y1;j++)
		{
			scanf("%d",&a[i*y1+j]);
		}
	}
    scanf("%d %d",&x2,&y2);
	b=(int *)malloc(x2*y2*sizeof(int));
	
	for(int i=0;i<x2;i++)
	{
		for(int j=0;j<y2;j++)
		{
			scanf("%d",&b[i*y2+j]);
		}
	}
    c=(int *)malloc(x1*y2*sizeof(int));
		int sum=0;
      for(int i=0;i<x1;i++)
	{
		for (int j=0;j<y2;j++)
		{
			sum=0;						
			for(int k=0;k<y1;k++)
			{
				sum=sum+a[i*y1+k]*b[k*y2+j];
			}
			c[i*y2+j]=sum;
		}
	}								  
      for(int i=0;i<x1;i++)
	{
		int j;
		for(j=0;j<y2-1;j++)
		{
			printf("%d ",c[i*y2+j]);
		}
		printf("%d",c[i*y2+j]);
		printf("\n");
	}
   }