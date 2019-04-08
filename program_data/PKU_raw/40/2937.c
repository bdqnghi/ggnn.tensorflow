main()
{
      double a,b,c,d;
      scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
      double s=(a+b+c+d)/2;
      double m;
      scanf("%lf",&m);
      double co=(m/180)*PI;
      double p;
      double q;
      q= (s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(co/2)*cos(co/2);
      if(q<0)
      printf("Invalid input");
      else
      {p=sqrt(q);
      printf("%.4lf",p);}
      
           
}
