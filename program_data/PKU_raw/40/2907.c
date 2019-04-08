int main(int argc, char *argv[])
{ double mianji(double a,double b,double c,double d,double j);
  double x,y,z,t,w,s;
 scanf("%lf%lf%lf%lf%lf",&x,&y,&z,&t,&w);
 s=mianji(x,y,z,t,w);
 if(s!=-1)
 printf("%.4lf\n",s);
 else
 printf("Invalid input\n") ;
  
  return 0;
}
 double mianji(double a,double b,double c,double d,double j)
 {double S,s,s2;
 double hudu;
  hudu=j/360*3.1415926;
  S=(a+b+c+d)/2;
  s2=(S-a)*(S-b)*(S-c)*(S-d)-a*b*c*d*cos(hudu)*cos(hudu);
  if(s2<0)
  s=-1;
  else
  s=sqrt(s2);
  return (s); 
       }
