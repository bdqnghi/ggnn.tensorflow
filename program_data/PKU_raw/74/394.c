int huiwen(int a)
{
    int k=0,t=a;
    while(t!=0)
    {
    k=k*10+t%10;
    t=t/10;
    }
    if (k==a) return 1;
    else return 0;
}
int su(int a)
{
    int i;
    for(i=2;i<=sqrt(a);i++)
    {
    if (a%i==0) break;
    }
    if(a==1||a==2) return 1;
    if (i<=sqrt(a)) return 0;
    else return 1;
}
int main()
{
    int m,n,i,j=0,num[100];
    scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++)
    {
        if (huiwen(i)==1&&su(i)==1)
        {
            num[j]=i;
            j++;
        }
    }
    if (j==0) printf("no");
    else 
    {
    	for(i=0;i<j-1;i++) printf("%d,",num[i]);
    	printf("%d",num[j-1]);
    }
    return 0;
}