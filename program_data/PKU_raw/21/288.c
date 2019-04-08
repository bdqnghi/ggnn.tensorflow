void main()
{
	int n,sum=0,max=0;
	int i,j,t,a[400];
	float f,f1,f2;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	f=(double)sum/n;
	for(i=0;i<n-1;i++)
	  for(j=0;j<n-1-i;j++)
		  if(a[j]>a[j+1])
		  {
			  t=a[j];
			  a[j]=a[j+1];
			  a[j+1]=t;
		  }
		  f1=(double)a[0];
		  f2=(double)a[n-1];

		  if(fabs(f-f1)==fabs(f-f2))
			  printf("%d,%d",a[0],a[n-1]);
		  else if(fabs(f-f1)>fabs(f-f2))
			  printf("%d",a[0]);
		  else
			  printf("%d",a[n-1]);
}

	