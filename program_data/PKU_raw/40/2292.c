int main()
{
   double a,b,c,d,e,f,s,S,m;
   scanf("%lf\n%lf\n%lf\n%lf\n%lf\n",&a,&b,&c,&d,&e);
   s =(a+b+c+d)/2;
   f =e/360*3.1415926;
   m =(s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos (e/360*3.1415926)*cos (e/360*3.1415926);  
    
   if(m<0){printf("Invalid input");}
   else{ S =sqrt(m); printf("%.4lf",S);}
   return 0;
}