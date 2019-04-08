
int main()
{
    int m,n,i;
    double s=1;
    scanf("%d",&n);
    if(n==0){printf("1");}
    else
    {
        for(i=1;i<=n;i++)
        {
          s*=2;
        }
        printf("%.0f",s);
    }
    
    return 0;
}
