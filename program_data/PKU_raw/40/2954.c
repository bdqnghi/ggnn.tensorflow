main()
{
    double a,b,c,d,angle,pi,alpha;
      scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&angle);
      pi=3.1415926;
      alpha=angle*pi/360;
      if(angle==0||angle==180)
      printf("Invalid input");
      else
      {
    double area,s;
      s=(a+b+c+d)/2;
      area=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(alpha)*cos(alpha));
      printf("%.4lf",area);
      }
      getchar();
      getchar();
    }
      
        
