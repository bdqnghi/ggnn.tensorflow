int main ()
{
    int a,b,c,d,e,f,g,h,i,j,k,m,n;
    scanf("%d",&a);
if(a<=10){
printf("%d",a);}
else   
{ if(a==10||a==100||a==1000)
{printf("001");}
else{
if(100>=a&&a>=10)
    {b=a%10;
    c=(int)(a/10);
    d=10*b+a;
    printf("%d\n",d);}
    else
    { if(1000>=a&&a>=100)
    {e=(int)(a/100);
    f=(int)((a-100*e)/10);
    g=a-100*e-10*f;
    m=100*g+10*f+e;
    printf("%d\n",m);}
    else
    {h=(int)(a/1000);
    i=(int)((a-1000*h)/100);
    j=(int)((a-1000*h-100*i)/10);
    k=a-1000*h-100*i-10*j;
    n=1000*k+100*j+10*i+h;
    printf("%d\n",n);
}}} }}
     