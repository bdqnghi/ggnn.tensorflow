/*double q(double a,b,c,d,w)
{
   w=3.1415926*w/180/2;
   doubles=0.5*(a+b+c+d);
  s=(s-a)* (s-b)* (s-c)* (s-d)-a*b*c*d*cos(w)*cos(w); 
  return s    
}*/
int main()                                
{
  double a,b,c,d,w,s;
  //double q(double a,b,c,d,w,s);
  scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&w);
  w=3.1415926*w/180/2;
  s=0.5*(a+b+c+d);
  s=(s-a)* (s-b)* (s-c)* (s-d)-a*b*c*d*cos(w)*cos(w);
  //s=q (a,b,c,d);
  if(s<0)
  {printf( "Invalid input");} 
  else
  {printf( "%0.4lf",sqrt(s));}
  return 0;
getchar();
getchar();
getchar();
}