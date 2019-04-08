main()
{
      double a,b,c,d,k;
      scanf("%lf",&a);
      scanf("%lf",&b);
      scanf("%lf",&c);
      scanf("%lf",&d);
      scanf("%lf",&k);
      double s=(a+b+c+d)/2;
      double t=((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*(cos(k*PI/360))*(cos(k*PI/360)));
      if(t<0) printf("Invalid input\n");
      else printf("%.4lf\n",sqrt(t));
}
