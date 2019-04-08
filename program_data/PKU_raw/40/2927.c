main()
{
  double a,b,c,d,w,s;
  scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&w);
  w=PI*w/180/2;
  s=0.5*(a+b+c+d);
  s=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(w)*cos(w);
  if(s<0) printf("Invalid input");
  else printf("%.4lf",sqrt(s));
  getchar();
  getchar();
  getchar();
}
