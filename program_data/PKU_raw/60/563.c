int prime(int n)
{
    int i,a;
    {for(i=2;i<=sqrt(n);i++)
       if(n%i==0){a=0;break;} 
    if(i>sqrt(n))a=1;} 
    return a;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    if(n<5)printf("empty");
    else printf("3 5");
    for(i=5;i+2<=n;i+=2)
    if(prime(i)*prime(i+2)==1)
    printf("\n%d %d",i,i+2);

}
