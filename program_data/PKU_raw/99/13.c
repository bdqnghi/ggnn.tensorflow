void main()
{
 int n,i,a[1000];
 double b[4]={0.0};
 scanf("%d",&n);
 for(i=0;i<=n-1;i++)
  {
   scanf("%d",&a[i]);
   if(a[i]>=1&&a[i]<=18)
     b[0]++;
   if(a[i]>=19&&a[i]<=35)
     b[1]++;
   if(a[i]>=36&&a[i]<=60)
     b[2]++;
   if(a[i]>=61)    
     b[3]++;
  }
 printf("1-18: %.2lf%%\n",b[0]*100/n);
 printf("19-35: %.2lf%%\n",b[1]*100/n);
 printf("36-60: %.2lf%%\n",b[2]*100/n);
 printf("60??: %.2lf%%\n",b[3]*100/n);
}
