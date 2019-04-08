int main()
{
    int n,a,b,c,d;
    scanf("%d",&n);
    a=n/1000;
    b=n/100-10*a;
    c=n/10-10*b-100*a;
    d=n-10*c-100*b-1000*a;
    if(a==0&&b==0&&c==0)printf("%d",d);
    if(a==0&&b==0&&c!=0){printf("%d",d);printf("%d",c);}
    if(a==0&&b!=0){printf("%d",d);printf("%d",c);printf("%d",b);}
    if(a!=0){printf("%d",d);printf("%d",c);printf("%d",b);printf("%d",a);}
    return 0;
} 