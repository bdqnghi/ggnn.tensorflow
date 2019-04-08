int isprime(long n)
{   long i;int j;j=1;
    if(n!=2)
    for(i=2;i<=sqrt(n);i++){{if(n%i==0){j=0;break;}}}
    return j;
}
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(j=3;j<=n/2;j++)
    {for(i=3;i<=2*j-1;i++)
    {
    if(isprime(i)&&isprime(2*j-i)){printf("%d=%d+%d\n",2*j,i,2*j-i);break;}
    }}

}


