void main()
{
  int n,a[1000],i;
  float e1,b1,c1,d1,e,b,c,d;
  scanf("%d\n",&n);
  for (e=0,b=0,c=0,d=0,i=1;i<=n;i=i+1)
      { scanf("%d ",&a[i]);
        if ((a[i]>=1)&&(a[i]<=18)) e=e+1;
        if((a[i]>=19)&&(a[i]<=35)) b=b+1;
        if((a[i]>=36)&&(a[i]<=60)) c=c+1;
        if((a[i]>60))              d=d+1;
        
       }
   e1=e/n*100;
   b1=b/n*100;
   c1=c/n*100;
   d1=d/n*100;
   printf("1-18: %.2f%%\n19-35: %.2f%%\n36-60: %.2f%%\n60??: %.2f%%",e1,b1,c1,d1);
}

