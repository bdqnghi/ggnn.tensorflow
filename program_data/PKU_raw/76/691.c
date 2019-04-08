int t[30000];
int max(int a,int b)
{return a>b?a:b;}
int min(int a,int b)
{return a<b?a:b;}

int main()
{
 int i,j,n,a,b,ma=0,mi=999999,f=1;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
        scanf("%d%d",&a,&b);
        ma=max(ma,b);
        mi=min(mi,a);
        for(j=2*a;j<=2*b;j++)
        t[j]=1;
 }
        for(i=2*mi;i<=2*ma;i++)
    if(!t[i])f=0;
    f?printf("%d %d",mi,ma):printf("no");

        return 0;
}
