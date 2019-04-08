int ok(int a)
{
    int i;
    for(i=2;i*i<=a;i++)
    if(a%i==0)return 0;
    return 1;
}
int num(int nu)
{
    int i,j;
    if(!ok(nu))return 0;
    for(i=nu,j=0;i>0;i/=10)
    {
                            j=j*10+i%10;
    }if(!ok(j))return 0;
    else if(j!=nu)return 0;
    else if(j==nu&&ok(j))return 1;
}
main()
{
     int m,n,i,count=0,a[1000];
     scanf("%d%d",&m,&n);
     for(i=m;i<=n;i++)
     {
             if(ok(i))
             {
                      if(num(i))
                      {
                                a[count]=i;
                                count++;
                      }
             }         
     }  
     if(count==0)printf("no");
     else {for(i=0;i<count-1;i++)
     printf("%d,",a[i]);
     printf("%d",a[count-1]);}
     getchar();
     getchar();
     getchar();   
}
