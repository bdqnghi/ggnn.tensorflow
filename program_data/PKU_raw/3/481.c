int main()
{
    int n,k,i,j,sum,leap=0;
    int a[10001];
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       /*if(i==n)
        {  printf("no");
            break;
        }*/
      for(j=0;j<n;j++)
      {
          if(i==j)
            continue;
          else
          {
              sum=a[i]+a[j];
              if(sum==k)
               {
                   printf("yes");
                   leap=1;
                   break;
               }
          }
      }
      if(leap==1)
      break;

    }
    if(leap==0)
    printf("no");
    return 0;
}


