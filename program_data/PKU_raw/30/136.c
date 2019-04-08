int main()
{
    int n,i,j,k,sum=0,a,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {      
           a=i/10;
           b=i-a*10;
           if((a!=7)&&(b!=7)&&(i%7!=0))
           sum=sum+i*i;
    }
    printf("%d",sum);
    scanf("%d",&n);
    return 0;
}       