main()
{
      double a,b,c,d,e,s;
      scanf("%lf\n%lf\n%lf\n%lf\n%lf",&a,&b,&c,&d,&e);
      s=(a+b+c+d)/2;
      if((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(e/360*3.141592653)*cos(e/360*3.141592653)<0)
      printf("Invalid input\n");
      else if((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(e/360*3.141592653)*cos(e/360*3.141592653)>=0)
      printf("%.4f\n",sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(e/360*3.141592653)*cos(e/360*3.141592653)));
}
