int main()
{
    long n,k,a,i,p,f,g,m;
    scanf("%ld%ld",&n,&k);
    p=1;
    f=(n-1);g=n;
    for(i=1;i<n-1;i++)f*=n-1;
    for(i=1;i<n;i++)g*=n;
    while((n*(p+k))%f)p++;
    m=g*((p+k)/f)-(n-1)*k;
    printf("%ld",m);
}
