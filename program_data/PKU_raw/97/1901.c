int main()
{
    int a,b,c,d,e,f,m;
    scanf("%d",&m);
    a=(m-m%100)/100;
    m=m-a*100;
    b=(m-m%50)/50;
    m=m-b*50;
    c=(m-m%20)/20;
    m=m-c*20;
    d=(m-m%10)/10;
    m=m-d*10;
    e=(m-m%5)/5;
    m=m-5*e;
    f=(m-m%1)/1;
    printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
    return 0;
}