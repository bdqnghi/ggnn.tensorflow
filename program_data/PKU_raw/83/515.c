void main()
{
	int a[11]={0};
	int b[11]={0};
	int n,i;
	float c[11]={0};
	float GPA;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		{
		   scanf("%d",&a[i]);
		   a[0]=a[0]+a[i];
		}
	
	for(i=1;i<=n;i++)
        {
		   scanf("%d",&b[i]);
		   if (b[i]<60) c[i]=0;
		   else if (b[i]<=63&&b[i]>=60)  c[i]=a[i]*1.0;
		   else if (b[i]<=67&&b[i]>=64)  c[i]=a[i]*1.5;
		   else if (b[i]<=71&&b[i]>=68)  c[i]=a[i]*2.0;
		   else if (b[i]<=74&&b[i]>=72)  c[i]=a[i]*2.3;
		   else if (b[i]<=77&&b[i]>=75)  c[i]=a[i]*2.7;
		   else if (b[i]<=81&&b[i]>=78)  c[i]=a[i]*3.0;
		   else if (b[i]<=84&&b[i]>=82)  c[i]=a[i]*3.3;
		   else if (b[i]<=89&&b[i]>=85)  c[i]=a[i]*3.7;
		   else if (b[i]<=100&&b[i]>=90) c[i]=a[i]*4.0;
	    }
	
	for (i=1;i<=n;i++)
	    c[0]=c[0]+c[i];
	
	GPA=c[0]/a[0];
	printf("%.2f",GPA);		
}
