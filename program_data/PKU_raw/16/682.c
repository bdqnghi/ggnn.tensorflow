int main()
{
    int n,x,y,z,m;
    scanf("%d",&n);
    x=n%10;
    y=(n%100-n%10)/10;
    z=(n%1000-n%100)/100;
    m=n/1000;
    if(n<10)
    printf("%d",n);
    else if(n==10)
    printf("01");
    else if(n==100)
    printf("001");
    else if(n==1000)
    printf("0001");
    else if(n==10000)
    printf("00001");
    else if(n>10&&n<100)
    printf("%d%d",x,y);
    else if(n>100&&n<1000)
    printf("%d%d%d",x,y,z);
    else if(n>1000&&n<10000)
    printf("%d%d%d%d",x,y,z,m);
    return 0;
}