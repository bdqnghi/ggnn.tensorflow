main()
{
  double a,b,c,d,s,x,y,z;
  const double PI=3.1415926;
  scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&x);
  s=(a+b+c+d)/2;
  x=x*PI/360;
  y=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(x)*cos(x);
  if(y>0)
    {
   z=sqrt(y);
  printf("%.4lf\n",z);  
}
  else
    printf("Invalid input\n");
  getchar();getchar();getchar();getchar();        
}
