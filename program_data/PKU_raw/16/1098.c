
int main()
{
    int x,k;
    
    scanf("%d",&x);
    k=log10(x)+1;
    
    
    
    
    if (x==0) {
        printf("%d",x);
    }
    else
    {
    int a,e=1,k1;
    k=k-1;
    k1=k;
    while (k1>0) {
        e=e*10;
        k1=k1-1;
    }
    
    int b=0,s=2,k3,e2,x2;
    k3=k;
    e2=e;
    x2=x;
    while (s>0) {
        while (k3>=0) {
            a=x2/e2;
            k3=k3-1;
            x2=x2-a*e2;
            b=b+a*(e/e2);
            e2=e2/10;
            if (s==1) {
                printf("%d",a);
            }
        }
        k3=k;
        e2=e;
        s=s-1;
        x2=b;
    }
    }
    return 0;
}