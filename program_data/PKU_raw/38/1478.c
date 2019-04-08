int main()
{
  int k,n,i,j;
  double a[100],sum=0,ave,m,w,g,s;
  scanf("%d",&n);
  for(i=0;i<n;i++)
   {  sum=0;
     scanf("%d\n",&k);
      for(j=0;j<k;j++)
       {
         scanf("%lf",&a[j]);
         sum+=a[j];
        }
       ave=sum/k;
        w=0;
     for(j=0;j<k;j++)
      {
        m=pow((a[j]-ave),2);
        w+=m;
	 }
	  g=w/k;
      s=sqrt(g);
      printf("%.5lf\n",s);
       
    }
    return 0;
}