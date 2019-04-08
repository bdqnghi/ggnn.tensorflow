int main()
{
    int x,a,b,c,d;
    scanf("%d",&x);
    if(x==10000)
    printf("00001");
    else if(x<10000&&x>=1000)
    {
    a=x%10;
    b=((x-a)/10)%10;
    c=((x-a-10*b)/100)%10;
    d=(x-a-10*b-100*c)/1000;
    printf("%d%d%d%d",a,b,c,d);
    }
    else if(x<1000&&x>=100)
    { 
    a=x%10;
    b=((x-a)/10)%10;
    c=(x-a-10*b)/100;
    printf("%d%d%d",a,b,c);
    }
    else if(x<100&&x>=10)
    { 
    a=x%10;
    b=(x-a)/10;
    printf("%d%d",a,b);
    }
    else printf("%d",x);
    return 0;
}
     