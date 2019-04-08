int main()
{
   double a,b,c,d,e,s,S;
   scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
   s=(a+b+c+d)/2;
   if((s-a)*(s-b)*(s-c)*(s-d)>=a*b*c*d*pow(cos(e*PI/360),2)){
   S=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*pow(cos(e*PI/360),2));
   printf("%.4lf",S);
   }
else
 {
   printf("Invalid input");
}
   
   return 0;
}
