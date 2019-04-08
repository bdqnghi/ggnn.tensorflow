main()
{
 int i,j,n; double ss,max;
 double spot[100][2];
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%lf%lf",&spot[i][0],&spot[i][1]);
 }
 for(i=0;i<n-1;i++)
 for(j=i+1;j<n;j++)
 {
  ss=sqrt((spot[i][0]-spot[j][0])*(spot[i][0]-spot[j][0])+(spot[i][1]-spot[j][1])*(spot[i][1]-spot[j][1]));
  if(max<=ss)
  max=ss;
 }
 printf("%.4lf",max);
}
