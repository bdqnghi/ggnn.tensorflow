


int f(int m,int n)
{
if(m==0||m==1) return 1;
if(n==0||n==1) return 1;
if(m<n) return f(m,m);
else return f(m-n,n)+f(m,n-1);
}
int main()
{
    int t=0;
    int m,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&m,&n);
        printf("%d\n",f(m,n));        
    } 

    return 0;
}