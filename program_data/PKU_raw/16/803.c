
int main()
{
   int n,a1,a2,a3,a4;
   scanf("%d",&n);
   a1=n/1000;
   a2=(n-1000*a1)/100;
   a3=(n-1000*a1-100*a2)/10;
   a4=(n-1000*a1-100*a2-10*a3);
    if(a1==0&a2==0&a3==0)
   printf("%d",a4);
   if(a1==0&a2!=0)
    printf("%d%d%d",a4,a3,a2);
   if(a1!=0&a2!=0&a3!=0)
    printf("%d%d%d%d",a4,a3,a2,a1);


    return 0;
}
