int main()
{
    int f(int a,int b);
    int n,m,i,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
                    scanf("%d",&m);
                    d=f(m,2);
                    printf("%d\n",d);
                    }
                    return 0;
                    }
    
    int f(int a,int b)
    {
        int t=1,k,j;
        for(j=b;j<a;j++)
        {
                        if(a%j==0&&a/j>=j)
                        k=f(a/j,j);
                        else
                        k=0;
                        t=t+k;
                        }
                        return t;
                        }