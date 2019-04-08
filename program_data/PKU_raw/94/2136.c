int main()
{
    int N,a[501],i,k,b[501],c,m;
    scanf("%d",&N);
    for(i=1,k=1;i<=N;i++)
    {
                     scanf("%d",&a[i]);
                     if((a[i])%2==1)
                     {b[k]=a[i]; k=k+1;}            
                     }
                     for(i=2;i<k;i++)
                     {
                                     if(b[i]<=b[1])
                                     {
                                                    c=b[1];
                                                    b[1]=b[i];
                                                    b[i]=c;
                                     }}
                                     printf("%d",b[1]);
                                     for(i=2;i<(k-1);i++)
                                     {
                                                     for(m=i+1;m<k;m++)
                                                     {
                                                                       if(b[m]<=b[i])
                                                                       {
                                                                                     c=b[i];
                                                                                     b[i]=b[m];
                                                                                     b[m]=c;
                                                                                     }}
                                                                                     }
                                                                                     for(i=2;i<k;i++)
                                                                                     {
                                                                                     printf(",%d",b[i]);
                                                                                     }
                                                                                                                                                                    return 0;
                                                                                     }