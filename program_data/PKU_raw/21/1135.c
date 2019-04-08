
int main()
{
	int n,a[300]={0},b[300]={0},i,sum=0,j,temp;
   double aver,dist,temp1;
	scanf("%d\n",&n);
	scanf("%d",&a[0]);
	for(i=1;i<n;i++)
		scanf(" %d",&a[i]);
	for(i=0;i<n-1;i++)
		for(j=i;j<n-1-i;j++)
			if(a[j]>a[j+1]) {temp=a[j];a[j]=a[j+1];a[j+1]=temp;}

	for(i=0;i<n;i++)
      sum+=a[i];

	  aver=sum/(double)n;
  
	 dist=fabs(a[0]-aver);
     for(i=0;i<n;i++)
		if(dist<fabs(a[i]-aver))
			dist=fabs(a[i]-aver);
	for(i=0;i<n;i++)
		if(fabs(dist-fabs(a[i]-aver))<1e-9)
		{printf("%d",a[i]);break;}
	for(j=i+1;j<n;j++)
         if(fabs(dist-fabs(a[j]-aver))<1e-9)
		{printf(",%d",a[j]);}
		printf("\n");
}
