int main()
{
    int a[12];
    int n,i;
    a[0]=13;
    a[1]=a[0]+31;
    a[2]=a[1]+28;
    for(i=3;i<8;i++)
    {
                     if(i%2==0)a[i]=a[i-1]+30;
                     else a[i]=a[i-1]+31;
     }
     for(i=8;i<12;i++)
     {
                      if(i%2==0)a[i]=a[i-1]+31;
                      else a[i]=a[i-1]+30;
     }
     scanf("%d",&n);
     n=6-n%7;
     for(i=0;i<12;i++)
     {
                      if(a[i]%7==n)printf("%d\n",i+1);
                      else ;
     }
     return 0;
}