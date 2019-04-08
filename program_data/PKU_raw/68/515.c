
main()
{
int n,i,j,m1,m2,a,b;
scanf("%d",&n);
for(i=6;i<=n;i+=2)
{
printf("%d=",i);
for(j=3;j<i;j+=2)
    {   int x=0;
        for(m1=3;m1<=sqrt(j);m1+=2)
        {
        if(j%m1==0)x=1;
        }
        if(x) continue;
        else
        { 
              a=i-j;
              int y=0;
              for(m2=3;m2<=sqrt(a);m2+=2)
              {
              if(a%m2==0)y=1;
              }
              if(y) continue;
              else printf("%d+%d\n",j,a);break;
               
        }
        
    }      
 
}
}