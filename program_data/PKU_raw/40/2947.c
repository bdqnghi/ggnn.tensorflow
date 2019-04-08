main()
{
      double a,b,c,d,e,s,ans,x;
      scanf("%lf",&a); 
      scanf("%lf",&b);
      scanf("%lf",&c); 
      scanf("%lf",&d);
      scanf("%lf",&e); 
      
      s=(a+b+c+d)/2;
      x=cos(e/2/180*3.1415926);
      ans=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*x*x;
      if (ans<0) printf("Invalid input");
      else printf("%.4lf\n",sqrt(ans));
  
}
