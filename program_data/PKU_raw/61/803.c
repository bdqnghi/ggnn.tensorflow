int f(int n)
{
    if(n==1 || n==2)
    return 1; 
    else
    return f(n-1)+f(n-2);
} 
int main() 
{
    int n,num,ans,i;
    scanf("%d",&n);
    for(i=1;i<n;i++)
   { scanf("%d",&num);
    ans=f(num);
    printf("%d\n",ans);
   }
    scanf("%d",&num);
    ans=f(num);
    printf("%d",ans);
} 