int main()
{
    int n,a,b,c,d,e,f,g,h,i,j;
    scanf("%d",&n);
    a=n%100;
    b=n%10; 
    c=(n-a)/100;
    d=a%50;
    e=(a-d)/50;
    f=((a-e*50)-(a-e*50)%20)/20;
    g=(n-100*c-50*e-20*f)%10;
    h=(n-100*c-50*e-20*f-g)/10;
    i=(n-100*c-50*e-20*f-10*h)%5;
    j=(n-100*c-50*e-20*f-10*h-i)/5;
    printf("%d\n%d\n%d\n%d\n%d\n%d",c,e,f,h,j,i);
    scanf("%d",&n);
    return 0;
}