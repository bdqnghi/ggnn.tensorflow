int main()
{
    int n,a;
    scanf("%d",&n);
    int i=1;
    int b=0;
    int c=0;
    int d=0;
    int e=0;
    while (i<=n){
        scanf("%d",&a);
        if(a>=1&&a<=18){
            b++;
        }else if(a>=19&&a<=35){
            c++;
        }else if(a>=36&&a<=60){
            d++;
        }else if(a>=61){
            e++;
        }
        i++;
    }
    double N,B,C,D,E;
    N=n;
    B=b;
    C=c;
    D=d;
    E=e;
    double F,G,H,I;
    F=B/N*100;
    G=C/N*100;
    H=D/N*100;
    I=E/N*100;
    printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%",F,G,H,I);
    return 0;
}
