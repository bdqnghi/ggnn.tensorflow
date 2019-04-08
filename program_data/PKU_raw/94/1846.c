int main()
{
    int N,i,j,t=0;
    scanf("%d",&N);
    int a[500],c[500]={0},m=0;
    for(i=0;i<N;i++)
    {
                    scanf("%d",&a[i]);
                    if(a[i]%2!=0)
                    {
                                 c[m]=a[i];
                                 m++;
                    }
    }
    for(i=0;i<m-1;i++)
    {
                      for(j=0;j<m-1-i;j++)
                      {
                                          if(c[j]>c[j+1])
                                          {
                                                         t=c[j];
                                                         c[j]=c[j+1];
                                                         c[j+1]=t;
                                          }
                      }
    }
    printf("%d",c[0]);
    for(i=1;i<m;i++)
    printf(",%d",c[i]);
    return 0;
} 