int fun(int x);
int main()
{
    int i,n,a[20];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    printf("%d\n",fun(a[i]));
    return 0;
}
int fun(int x)
{
    int b[100],i;
    if(x==1||x==2)return 1;
    else
    { 
        b[0]=b[1]=1;
        for(i=2;i<x;i++)
        b[i]=b[i-1]+b[i-2];
        return b[i-1];
        }
        }
