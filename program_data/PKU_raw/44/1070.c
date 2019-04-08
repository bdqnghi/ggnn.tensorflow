
int reverse(int num)
{
    if(num==0||num==-0)
        return 0;

    int x=abs(num);
    while(x%10==0)
    {
        x/=10;
    }

    int i=0, sum=0, sz[100];
    for(;x!=0;x/=10) 
    {
        sz[i++] = x%10;
    }

    x=i;
    for(i=0;i<x;i++)
    {
        sum+=sz[i]*pow(10,(x-i-1));
    }

    if(num<0)
        sum=-sum;

    return sum;
}

int main()
{
    int num, i;

    for(i=0;i<6;i++)
    {
        scanf("%d", &num);
        printf("%d\n", reverse(num));
    }

    return 0;
}