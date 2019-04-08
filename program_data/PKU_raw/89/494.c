int main()
{
    int n,i,j,a[100000],b[100000],k,c,u=0,g=0;
    scanf("%d",&n);
    for(i=1;;i++)
    {
                          
                          scanf("%d %d",&a[i],&b[i]);
                          if(a[i]==0&&b[i]==0)
                          break;
                          g++;
    }
    for(j=0;j<=n-1;j++)
    {
                     k=0,c=0; 
                     for(i=1;i<=g;i++)
                     {
                                      if(j==a[i])
                                      k++;
                     }
                     for(i=1;i<=g;i++)
                     {
                                      if(j==b[i])
                                      c++;
                     }
                     if(k==0&&c==(n-1))  //hungry~~~ToT.....
                     {printf("%d",j);
                     u++;
                     }
    }
    if(u==0)
    printf("NOT FOUND");
    getchar();
    getchar();
    getchar();
}