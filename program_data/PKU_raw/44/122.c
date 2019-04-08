int reserve(int num)
{
    int a[10],b,c,d,e,i,j,l;
    for(i=0;i<10;i++)
    {
         for(j=9,a[i]=num;j>i;j--)
         {
               a[i]=a[i]/10;
         }
         for(j=9,b=1;j>i;j--)
         {
               b=b*10;
         }
         num=num-a[i]*b;
    }
    for(i=0;i<=9;i++)
    {
         if(a[i]!=0)
         break;
    }
    c=i;
    for(i=9;i>=0;i--)
    {
         if(a[i]!=0)
         break;
    }
    d=i;
    for(i=d,e=0;i>=c;i--)
    {
         for(j=d-c-(d-i);j>0;j--)
         {
              a[i]=a[i]*10;
         }
         e=e+a[i];
    }
    return e;
}
int main()
{
    int i,a;
    for(i=0;i<6;i++)
    {
         scanf("%d",&a);
         printf("%d\n",reserve(a));
    }
    getchar();
    getchar();
}
               
               
    