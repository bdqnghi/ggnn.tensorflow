int main()
{
    int m=1,a,b,c,i,n,j;
    float x,sum;
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
                     scanf("%d",&n);
                     a=1;b=1;sum=0;j=1;
                     while(j<=n)
                     {
                                c=a+b;
                                a=b;
                                b=c;
                                x=(float)b/a;
                                sum=sum+x;
                                j=j+1;
                                }
                                printf("%.3f\n",sum);
                                }
                                                          return 0;
                                }
                                