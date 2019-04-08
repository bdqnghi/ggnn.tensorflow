int reverse(int num)
{
    int j,m,s,r;
    if(num>0)
        s=num;
    else
        s=0-num;
    r=0;
    for(j=1;s>0;j++)
    {
        m=s%10;
        r=r*10+m;
        s=s/10;
    }
    if(num<0)
        r=0-r;
    return(r);
}
int main()
{
     int i;
     int a[7];
     int c[7];
     for(i=1;i<=6;i++)
         scanf("%d",&a[i]);
     for(i=1;i<=6;i++)
         if(a[i]==0)
             printf("0\n");
         else
         {
             c[i]=reverse(a[i]);
             printf("%d\n",c[i]);
         }
}