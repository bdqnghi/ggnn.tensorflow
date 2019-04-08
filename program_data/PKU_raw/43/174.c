int is(int x)
{
    int i,res=1;
    if(x%2==0)res=0;
    for(i=3;i<=x/2;i++)
    {
        if(x%i==0)
        {
            res=0;
            break;
        }
    }
    return res;
}
int main()
{
    int i=3,input;
    scanf("%d",&input);
    while(i<=input/2)
    {
        if(is(i)==0||is(input-i)==0);
        else printf("%d %d\n",i,input-i);
        i++;
    }


}
