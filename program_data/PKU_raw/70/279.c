int main()
{
	int n;
	scanf("%d\n",&n);
	int i,j;
	double a[10000][2],b;
	double s=0;
	for(i=0;i<n;i++)
	{
		scanf("%lf %lf\n",&a[i][0],&a[i][1]);
    }
        for(i=0;i<n;i++)
		{
         for(j=0;j<n;j++)
         {
          b=sqrt((a[i][0]-a[j][0])*(a[i][0]-a[j][0])+(a[i][1]-a[j][1])*(a[i][1]-a[j][1]));
		  if(b>=s) 
		  {s=b;}
		 }
	    }
     printf("%.4lf",s);
	return 0;
}
