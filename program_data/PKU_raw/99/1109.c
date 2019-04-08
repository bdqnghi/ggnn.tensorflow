int main()
{
    int n,a,b,c,d,i,x;
    double A,B,C,D;
    scanf("%d\n",&n);
    a=0;
    b=0;
    c=0;
    d=0;
    for(i=1;i<=n;i++)
    {
     scanf("%d",&x);
     if(x<=18)
     {a++;}
     else if(x>=19&&x<=35)
     {b++;}
     else if(x>=36&&x<=60)
     {c++;}
     else
     {d++;}
    }
    A=100.0*a/n;
    B=100.0*b/n;
    C=100.0*c/n;
    D=100.0*d/n;
    printf("1-18: %.2lf%%\n",A);
    printf("19-35: %.2lf%%\n",B);
    printf("36-60: %.2lf%%\n",C);
    printf("Over60: %.2lf%%\n",D);
    return 0;
}


