int sum;
int work(int n,int m)
{
    if(m>n) m=n;
    if(n==1||m==1) return 1;
    if(n!=0&&m==0)  return 0;
    if(n==0&&m!=0)  return 0;
    if(n==0&&m==0)  return 1;
    return  work(n-m,m)+work(n,m-1);
}
int main()
{   
    int a,b,c,i;
    scanf("%d",&c);
    for(i=1;i<=c;i++)
    {
    scanf("%d %d",&a,&b);
    printf("%d\n",work(a,b));
    }
}
