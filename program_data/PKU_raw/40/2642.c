double getarea(double a,double b,double c,double d,double e,double jiaodu);
int main ()
{
    double k,l,m,n,s,jiao;
    double area,zanshi;
    scanf("%lf%lf%lf%lf%lf",&k,&l,&m,&n,&jiao);
    s=(k+l+m+n)/2;
    jiao=jiao/360*PI;
    jiao=cos(jiao);
    zanshi=getarea(k,l,m,n,s,jiao);
    if(zanshi<0){
     printf("Invalid input");
    }
    else{
          area=sqrt(zanshi);
          printf("%.4lf",area);
    }
    

    return 0;
}
 double getarea(double a,double b,double c,double d,double e,double jiaodu)
{
       double zanshimianji;
       zanshimianji=(double)((e-a)*(e-b)*(e-c)*(e-d)-a*b*c*d*jiaodu*jiaodu);
       return zanshimianji;
}
