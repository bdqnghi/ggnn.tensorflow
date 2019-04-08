void main()
{
 int n,i,j;
 double a[100][2],max;
 scanf("%d",&n);
 for(i=0;i<n;i++)
	 for(j=0;j<2;j++)
		 scanf("%lf",&a[i][j]);
 max=sqrt((a[0][0]-a[1][0])*(a[0][0]-a[1][0])+(a[0][1]-a[1][1])*(a[0][1]-a[1][1]));
 for(i=0;i<n;i++)
 {
  for(j=i;j<n;j++)
  {
   if(max<sqrt((a[i][0]-a[j][0])*(a[i][0]-a[j][0])+(a[i][1]-a[j][1])*(a[i][1]-a[j][1])))
	   max=sqrt((a[i][0]-a[j][0])*(a[i][0]-a[j][0])+(a[i][1]-a[j][1])*(a[i][1]-a[j][1]));
  }
 }
 printf("%.4lf",max);
}