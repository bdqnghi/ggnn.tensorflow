int main() 
{
   int n,i;
   scanf("%d",&n);
   int a[N];
   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
   int b,c,d,e;
   b=0;c=0;d=0;e=0;
   for(i=0;i<n;i++)
   {
     if(a[i]<=18)
     {
          b++;
     }
     else if(a[i]>=19&&a[i]<=35)
     {
          c++;
     }
     else if(a[i]>=36&&a[i]<=60)
     {
          d++;
     }
     else 
     {
          e++;
     }
   }
   double b1,c1,d1,e1;
 b1=(double)b/n*100; c1=(double)c/n*100; d1=(double)d/n*100; e1=(double)e/n*100;
   printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%",b1,c1,d1,e1);
   return 0;
}