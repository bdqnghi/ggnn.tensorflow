
int main(int argc, char *argv[])
{
  float a,b,c,d,e,s,t=0,m;
   scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
   s=(a+b+c+d)/2;
   m=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*pow(cos((e*3.1415926)/360),2);
   if(m<0)
   printf("Invalid input");
   else {t=sqrt(m); 
  printf("%.4f",t);}
  return 0;
}
