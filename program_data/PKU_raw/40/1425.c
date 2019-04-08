main()
{
      double a,b,c,d,s,e,n,m;
      scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
      s=(a+b+c+d)/2;
      m=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(e/360*3.141592653)*cos(e/360*3.141592653);
      if(m<0)printf("Invalid input\n");
      else if(m>=0)
      printf("%.4lf",sqrt(m));
}
