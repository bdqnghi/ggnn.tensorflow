int main()
{
	int a[10000],b[10000],c[10000];
	int i,j,k,sum,x1,x2,y1,y2;
	scanf("%d %d",&x1,&y1);
	for(i=0;i<x1;i++)
	{
       for(j=0;j<y1;j++)
          scanf("%d",&a[i*y1+j]);
    }
    scanf("%d %d",&x2,&y2);
    for(i=0;i<x2;i++)
	{
       for(j=0;j<y2;j++)
          scanf("%d",&b[i*y2+j]);
    }
    for(i=0;i<x1;i++)
    {
       for(j=0;j<y2;j++)
       {
          sum=0;
          for(k=0;k<y1;k++)
             sum=sum+a[i*y1+k]*b[k*y2+j];
          if(j<y2-1)
	         printf("%d ",sum);
          else
             printf("%d\n",sum);
       }
    }
}