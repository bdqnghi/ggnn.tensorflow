int reverse(int num)
{
    int d=0,m=num;
    if(m>0)
       while(m!=0)
       {
           d=d*10+m%10;
           m/=10;
       }
    else if(m<0)
    {
        m=m*(-1); 
        while(m!=0)
        {
            d=d*10+m%10;
            m/=10;
        }
        d=d*(-1);
    }
          else;
    return d;
}

int main()
{
    int i,a;
    for(i=1;i<=6;i++)
    {
        scanf("%d",&a);
        printf("%d\n",reverse(a));
    }
    getchar();
    getchar();
}