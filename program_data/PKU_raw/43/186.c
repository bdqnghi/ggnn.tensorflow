
int main()
{
    int jishu(int x);
    int sushu(int x);
    int m,a,i;
    scanf("%d",&m);
    for(i=1; i<=(m/2); i++)
    {
        if(sushu(i)&&jishu(i))
        {
            a=m-i;
            if(jishu(a)&&sushu(a))
            {
                printf("%d %d\n",i,a);
            }
        }
    }

    return 0;
}
int jishu(int x)
{
    int d;
    if(x%2==0)
        return 0;
    else
        return 1;
}
int sushu(int x)
{
    int k,i,c;
    k=sqrt(x);
    if(x<3)
    {
        return 0;
    }
    else
    {
        for(i=2; i<=k; i++)
        {
            if(x%i==0)
            {
                break;
            }
        }
        if(i>k)
        {
            return 1;
        }

        else
        {
            return 0;
        }
    }

}
