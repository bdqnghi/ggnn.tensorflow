main()
{
    double a=0, b=0, c=0, d=0;
    double angle=0;
          scanf("%lf",&a);
          scanf("%lf",&b);
          scanf("%lf",&c);
          scanf("%lf",&d);
          scanf("%lf",&angle);
    double s =(a+b+c+d)/2;
    if((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(angle/360*pi)*cos(angle/360*pi)<= 0)
    {
          printf("Invalid input\n");
    }
    else
    {        
          printf("%.4lf\n",sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(angle/360*pi)*cos(angle/360*pi)));
    }
    
	return 0;

}
