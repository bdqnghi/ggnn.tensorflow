int main()
{
  int sum1,sum2,sum3,sum4,i,n,sum;
  double q,w,e,r;
  sum1 = 0;
  sum2 = 0;
  sum3 = 0;
  sum4 = 0;
  sum = 0;
  q = 0;
  w = 0;
  e = 0;
  r = 0;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
    if(1<=a[i]&&a[i]<=18)
    {
     sum1++;
    }
    if(19<=a[i]&&a[i]<=35)
    {
      sum2++;
    }
     if(36<=a[i]&&a[i]<=60)
    {  
     sum3++;
    }
     if(a[i]>60)
    {
     sum4++;
    }
  }
    sum = sum1+sum2+sum3+sum4;
    q=(double)sum1/(double)sum;
    w=(double)sum2/(double)sum;
    e=(double)sum3/(double)sum;
    r=(double)sum4/(double)sum;
    printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%",q*100,w*100,e*100,r*100);
    return 0;
 }




