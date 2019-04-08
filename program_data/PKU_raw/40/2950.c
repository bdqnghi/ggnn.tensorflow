main()
{
      double a,b,c,d,s,ang;
      scanf("%lf",&a);
      scanf("%lf",&b);
      scanf("%lf",&c);
      scanf("%lf",&d);
      scanf("%lf",&ang);
      s=(a+b+c+d)/2;
      ang=ang*3.1415926/180;
      if((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(ang/2)*cos(ang/2)<0)
          printf("Invalid input");
      else
          printf("%.4lf",sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(ang/2)*cos(ang/2)));
      getchar();
      getchar();
}
