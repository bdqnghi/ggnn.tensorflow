int main()
{
     
       double y=0,a,b,c,d,s=0,x=0,e,v=0;
       scanf("%lf\n%lf\n%lf\n%lf\n%lf",&a,&b,&c,&d,&e);
       s = (a+b+c+d)/2; 
       v=e/360*3.1415926;
       x = (s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(v)*cos(v); 
      if(x<0)
      {
       printf("Invalid input");
       }
      else{
      printf("%.4lf",sqrt(x));
       }
 
   return 0;
  }