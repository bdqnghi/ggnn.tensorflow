int main()
{
	int *a=NULL,*b=NULL,*c=NULL;
	int x1=0,x2=0,y1=0,y2=0,i,j,k;
	scanf("%d%d",&x1,&y1);
	a=(int *)malloc(x1*y1*sizeof(int));
	for(i=0;i<x1;i++)
	{
		for(j=0;j<y1;j++)
		{
			scanf("%d",&a[i*y1+j]);
		}
	}
	scanf("%d%d",&x2,&y2);
	b=(int *)malloc(x2*y2*sizeof(int));
	for(i=0;i<x2;i++)
	{
		for(j=0;j<y2;j++)
		{
			scanf("%d",&b[i*y2+j]);
		}
	}
	c=(int *)malloc(x1*y2*sizeof(int));
	for(i=0;i<x1;i++)
	{
		for(j=0;j<y2;j++)
		{
			c[i*y2+j]=0; 
			for(k=0;k<x2;k++)
			{
				c[i*y2+j]=c[i*y2+j]+a[i*y1+k]*b[k*y2+j];
			}
		}
	}
	for(i=0;i<x1;i++)
	{
		for(j=0;j<y2;j++)
		{
			printf("%d",c[i*y2+j]);
			if(j<y2-1)
			{printf(" ");}
			if(j==y2-1)
			{printf("\n");}
		}
	}
}