int main()
{
    int n,a,b,c;
    scanf("%d",&n);
    a=n%10;
    b=(n%100-n%10)/10;
    c=n/100;
    printf("%d\n",c);
    if(b<5)
    {
        printf("%d\n%d\n%d\n",0,b/2,b-b/2*2);
    }
    else
    {
        printf("%d\n%d\n%d\n",1,(b-5)/2,b-(b-5)/2*2-5);
    }
    if(a<5)
    {
        printf("%d\n%d\n",0,a);
    }
    else
    {
        printf("%d\n%d\n",1,a-5);
    }
    return 0;
}