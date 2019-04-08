int main()
{
    int n;
	double a[100][3];
	int i,j,k;
	double d;
	double max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%lf%lf",&a[i][1],&a[i][2]);
	}
    for(j=0;j<(n-1);j++)
	{
	     for(k=j+1;k<n;k++)
		 {
		      d=(double)pow(a[j][1]-a[k][1],2)+pow(a[j][2]-a[k][2],2);
			  if(d>max)
			  {
			      max=d;
			  }
		 }
	}
	max=pow(max,0.5);
	printf("%.4lf",max);
	return 0;
}