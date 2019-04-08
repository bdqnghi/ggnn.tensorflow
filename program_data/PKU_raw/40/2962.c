int main()
{
    double a,b,c,d,angle,s,sqr;
    scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&angle);
    s = (a+b+c+d)/2;
    angle = (angle /180)*PI;
    sqr=(s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(angle/2)*cos(angle/2);
    if (sqr>0)
      {
          printf("%.4lf\n",sqrt(sqr));
      }
      else
      if (sqr<0)
      printf("Invalid input\n");
      else printf("0\n");

}


