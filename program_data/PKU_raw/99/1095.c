int main()
{
    double n,a,b,c,d,x,m,h,p,q;
    a=0;
    b=0;
    c=0;
    d=0;
    int i=1;
    scanf("%lf",&n);
    while(i<=n){
        scanf("%lf",&x);
        if(x<=18){
            a++;
        }
        else if(x>=19&&x<=35){
            b++;
        }
        else if(x>=36&&x<=60){
            c++;
        }
        else if(x>60){
            d++;
        }
        i++;
    }
    m=100*a/n;
    h=100*b/n;
    p=100*c/n;
    q=100*d/n;
   printf("1-18: %.2lf",m);
   printf("%%\n");
   printf("19-35: %.2lf",h);
   printf("%%\n");
   printf("36-60: %.2lf",p);
   printf("%%\n");
   printf("60??: %.2lf",q);
   printf("%%");
    return 0;
    
}