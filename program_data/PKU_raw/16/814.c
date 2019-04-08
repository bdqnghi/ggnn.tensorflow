int main()
{
    int x,a,b,c,d,e;
    scanf("%d",&x);
    a=x/10000;
    b=(x%10000)/1000;
    c=(x%1000)/100;
    d=(x%100)/10;
    e=x%10;
    printf("%d",e);
    if(d||c||b||a) printf("%d",d);
    if(c||b||a) printf("%d",c);
    if(b||a) printf("%d",b);
    if(a) printf("%d",a);
    return 0;
}
