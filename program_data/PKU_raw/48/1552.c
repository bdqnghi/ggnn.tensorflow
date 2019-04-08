
struct bacteria
{
       int have;
       int add;
}a[11][11];
int main()
{
    int m,n,i,j,l,k;
    memset(a,0,sizeof(struct bacteria)*121);
    scanf("%d%d",&a[5][5].have,&n);
    for(m=1;m<=n;m++)
    {
                     for(i=5-n;i<=5+n;i++)
                     {
                                      for(j=5-n;j<=5+n;j++)
                                      {
                                                       for(k=-1;k<=1;k++)
                                                       {
                                                                         for(l=-1;l<=1;l++)
                                                                         {
                                                                                           a[i][j].add+=a[i+l][j+k].have;
                                                                         }
                                                       }
                                      }
					 }
					 for(i=5-n;i<=5+n;i++)
                     {
                                      for(j=5-n;j<=5+n;j++)
                                      {
                                                           a[i][j].have+=a[i][j].add;
                                                           a[i][j].add=0;
                                      }
                     }
    }
    for(i=1;i<10;i++)
    {
                     printf("%d",a[i][1].have);
                     for(j=2;j<10;j++)
                     {
                                      printf(" %d",a[i][j].have);
                     }
                     printf("\n");
    }
    return 0;
}