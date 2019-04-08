void main()
{
	int n,i,j,p=0;
	float m,a[300],sum=0,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
		sum=sum+a[i];
	}
   m=sum/n;
   for(i=0;i<(n-1);i++)
   {
	   for(j=(i+1);j<n;j++)
		   if(fabs(a[i]-m)<fabs(a[j]-m))
		   {
			   t=a[i];
			   a[i]=a[j];
			   a[j]=t;
		   }
   }
   for(i=0;i<n;i++)
   if(fabs(a[i]-m)==fabs(a[0]-m))
	   p=p+1;
   for(i=0;i<(p-1);i++)
	  {
	   for(j=(i+1);j<p;j++)
		   if(a[i]>a[j])
		   {
			   t=a[i];
			   a[i]=a[j];
			   a[j]=t;
		   }
   }
    
	printf("%.0f",a[0]);	   
   for(i=1;i<p;i++)
   {
	   
	printf(",%.0f",a[i]);
   }

	   

}

