int main()
{ double a=0,b=0,c=0,d=0,t=0,s=0,h=0,S=0,pi=3.1415926;
  scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&t);
  t=t/2;
  h=t*pi/180;
  s = (a+b+c+d)/2;
  if((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(h)*cos(h)>=0)
  {S = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(h)*cos(h)); 
  printf("%.4lf",S);}
  else if((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(h)*cos(h)<0)
  printf("Invalid input");
    return(0); 
  
	
	
}