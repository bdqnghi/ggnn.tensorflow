int main()
{
    int n,m,a[1000]={0},i,j,sum=0,num;
  for(j=0;j<1000;j++)
    {
       scanf("%d %d",&n,&m);
       num=n;
       if(m==0)
         break;
    for (i=0;i<1000;i++)
     { a[i]=0;}
    if(m!=0)
    {
       for(i=0;i<n;i++)
       {

          if(a[i]==0)
          sum=sum+1;
          /*else
          sum=sum+0;*/
          if(sum==m)
          {
            sum=0;
            a[i]=1;
            num=num-1;
          }
          if(i==n-1)
            i=-1;
          if(num==1)
          {
            break;}
      }
       for(i=0;i<n;i++)
        {if(a[i]==0)
         printf("%d\n",i+1);
        }
    }
    sum=0;//sum??????

    }
     return 0;
}