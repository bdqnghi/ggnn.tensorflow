
int main()
{
	int x1,y1,x2,y2;
	scanf("%d%d",&x1,&y1);
	int *a=(int*)malloc(sizeof(int)*x1*y1);
	int i,j,k;
	for(i=0;i<x1*y1;i++)
	{
		scanf("%d",a+i);
	}
	scanf("%d%d",&x2,&y2);
	int *b=(int*)malloc(sizeof(int)*x2*y2);
	for(i=0;i<x2*y2;i++)
	{
		scanf("%d",b+i);
	}
	int *c=(int*)malloc(sizeof(int)*x1*y2);
	for(j=0;j<x1;j++)
	{
		for(i=0;i<y2;i++)
		{
			for(k=0;k<y1;k++)
			{
				*(c+i+j*y2)+=*(a+j*y1+k)*(*(b+k*y2+i));
			}
		}
	}
	for(j=0;j<x1;j++)
	{
		printf("%d",*(c+j*y2));
if(y2==1)
printf("\n");
		for(i=1;i<y2;i++)
		{
			printf(" %d",*(c+i+j*y2));
			if(i==y2-1)
				printf("\n");
		}
	}
        free(a);
        free(b);
        free(c);
	return 0;
}
