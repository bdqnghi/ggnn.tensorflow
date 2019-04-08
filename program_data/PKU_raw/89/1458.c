int main()
{
    int n;
    int i,j;
    int a[100000],b[100000];
    int x,y,m,k;
    scanf("%d",&n);
    scanf("%d %d",&i,&j);
    m=0;
    for(k=0;k<n;k++)
    { a[k]=0; b[k]=0; }
    while((i==0&&j!=0)||(i!=0&&j==0)||(i!=0&&j!=0))
    {
              for(k=0;k<n;k++)   
              {
                  if(i==k)
                     b[i]--;
              }
              for(k=0;k<n;k++)   
              {                                   
                   if(j==k)
                          b[j]++;
              }
              
              scanf("%d %d",&i,&j);
    }
    for(k=0;k<n;k++)  
    {
                      if(b[k]==n-1)
                      {
                                   m++;
                                   printf("%d\n",k);
                      }
    }
    if(m==0) printf("NOT FOUND");
    getchar();
    getchar();
}