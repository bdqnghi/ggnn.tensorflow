int main()
{
    int m,a[1000],s=0,i,j;
    scanf("%d",&m);
    for(i=2;i<m;i++)
    {
                    for(j=2;j<=sqrt(i);j++)
                    {
                                           if(i%j==0)
                                           break;
                    }
                    if(j>sqrt(i))
                    {
                        a[s]=i;
                        s=s+1;
                    }
    }
    for(i=0;i<s-1;i++)
    {
                    for(j=s-1;j>=i;j--)
                    {
                                      if(a[i]+a[j]==m)
                                      printf("%d %d\n",a[i],a[j]);
                    }
    }
    getchar();
    getchar();
}

