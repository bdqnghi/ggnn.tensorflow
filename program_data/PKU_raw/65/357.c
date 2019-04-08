int main()
{
    int n,j,o1=0,p1=0;
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        int o,p;
        scanf("%d%d",&o,&p);
        if(o==p);
        else if((o==0&&p==1)||(o==1&&p==2)||(o==2&&p==0))  o1++;
        else p1++;
    }
    if(o1>p1) printf("A\n");
    else if(p1>o1) printf("B\n");
    else printf("Tie\n");
}