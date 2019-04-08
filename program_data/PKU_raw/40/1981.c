int main()
{
    double a,b,c,d,w,s,S;
    scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&w);
    s=(a+b+c+d)/2.0;
    w=cos(w/2.0*3.1415926/180.0);
    
    if((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*w*w>0){
      S=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*w*w);
      printf("%.4f\n",S);
    }
 else{ 
      printf("Invalid input\n");
    }
 return 0;
} 

