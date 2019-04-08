int main()
{
    int n,a,b,c,d,e,f;
    scanf("%d",&n);
    if(n/100>=1){
                 a=n/100;
                 n=n-100*a;
                 }
    else a=0;
    if(n/50>=1){
                b=n/50;
                n=n-50*b;
                }
    else b=0;
    if(n/20>=1){
                c=n/20;
                n=n-20*c;
                }
    else c=0;
    if(n/10>=1){
                d=n/10;
                n=n-10*d;
                }
    else d=0;
    if(n/5>=1){
                e=n/5;
                n=n-5*e;
                }
    else e=0;
    f=n;
    printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
    scanf("%d",&n);
    return 0;
}
