
int n;
int a[100000];
int u;
int b[100000];

int zs(int x)
{
    for(int i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
           return 0;
    }
    return 1;
}

void inits()
{
     a[1]=0;
     u=0;
     for(int i=2;i<=n;i++)
     {
         if(zs(i))
         {
             a[i]=1;
             u++;
             b[u]=i;
         }
         else
         a[i]=0;
     }
     return ;
}

int main()
{
    scanf("%d",&n);
    inits();
    for(int i=6;i<=n;i++)
    {
        if(!(i%2))
        {
            for(int j=1;j<=u;j++)
            {
                if(a[b[j]] && a[i-b[j]])
                {
                   printf("%d=%d+%d\n",i,b[j],i-b[j]);
                   break;
                }
                if(b[j]>i/2)
                break;
            }
        }
    }
    return 0;
}
