

int main()
{
    int n,k,a[1020],i=1,j=1,h=0;
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++)
      scanf("%d",&a[i]);
    for(i=1;i<=n;i++)
      for(j=i+1;j<=n;j++)
        if(a[i]+a[j]==k)
          h=h+1;
       
  if(h>=1)
    printf("yes\n");
  else
     printf("no\n");
     getchar();
     getchar();
           
    return 0;
}
