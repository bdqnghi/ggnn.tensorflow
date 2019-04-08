int main()
{
    int a,b,c,d,e,f,g,h,i,j;
    scanf("%d",&a);
    if(a<=9) printf("%d\n",a);  
    else
    {if(a<=99) 
    {b=a/10;c=a-10*b;
    printf("%d%d",c,b);}
    else
    {if(a<=999)
    {d=a/100;e=(a-d*100)/10;f=a-100*d-10*e;
    printf("%d%d%d",f,e,d);}
    else
    if(a<=9999)
    {g=a/1000;h=(a-1000*g)/100;i=(a-1000*g-100*h)/10;j=a-1000*g-100*h-10*i;
    printf("%d%d%d%d",j,i,h,g);}
    else
    if(a=10000)
    printf("00001\n");}}	
  return 0;
}
