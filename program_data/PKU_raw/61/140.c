int ferbo(int r)
{
    if(r==1||r==2)
    return 1;
    else
    return ferbo(r-1)+ferbo(r-2);
}
int main()
{
    int b[20],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",ferbo(b[i]));
    }
}

