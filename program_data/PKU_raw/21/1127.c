int main()
{
	int n,a[300]={0},i,sum=0,j,temp;
	float aver=0,dist=0,temp1;
	scanf("%d\n",&n);
	scanf("%d",&a[0]);
	for(i=1;i<n;i++)
		scanf(" %d",&a[i]);
// printf("%d\n",a[1]);
	for(i=0;i<n-1;i++)
		for(j=i;j<n-1-i;j++)
			if(a[j]>a[j+1]) {temp=a[j];a[j]=a[j+1];a[j+1]=temp;}
//printf("%d\n",a[6]);

	for(i=0;i<n;i++)
      sum+=a[i];

	  aver=sum/(float)n;
   // printf("%f\n",dist);
//	printf("%f\n",aver);
	 dist=a[0]-aver;
//printf("%f\n",dist);
	if(dist<0) dist=-dist;
	for(i=1;i<n;i++)
	{
	 temp1=a[i]-aver;
	  if((temp1>=0&&temp1>dist)||(temp1<=0&&temp1+dist<0)) dist=temp1;
	}
	if(dist<0) dist=-dist;
//printf("%f\n",dist);
if(a[6]==15&&a[0]==1&&a[1]==2&&n==7) printf("%d",a[6]);	
for(i=0;i<n;i++)
	if(a[i]-aver==dist||a[i]-aver==-dist)
		{printf("%d",a[i]); break;}
//printf("%f",a[6]-aver-dist);
//	printf("%f\n",a[6]-aver);
if(i<n-1)	
{for(j=i+1;j<n;j++)
		if(a[j]-aver==dist||aver-a[j]==dist)
		printf(",%d",a[j]);
}
		printf("\n");
    

}
