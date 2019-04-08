int main()
{
    int n,a,b,c,d,e,f;
    scanf("%d",&n);
    a=n/100;
    b=(n%100)/50;
    c=((n%100)-50*b)/20;
    d=((n%100)-b*50-20*c)/10;
    e=((n%100)-b*50-c*20-d*10)/5;
    f=((n%100)-b*50-c*20-d*10-e*5)/1;
    printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
    return 0;
}