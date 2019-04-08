int n;
int main()
{
    int k;
    int cout(int,int);
    scanf("%d%d",&n,&k);
    printf("%d",n*cout(n,k)+k);
    return 0;
}
int cout(int m,int k)
{
    int i;
    if(m==1)
    {
        for(i=1;;i++)
        {
            if((i*pow(n-1,n-1)-k)>0);
            {
                return pow(n-1,n-1)-k;
                break;
            }
        }
    }
    else return (n*cout(m-1,k)+k)/(n-1);
}
