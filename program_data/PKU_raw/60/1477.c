int main()
{
    int spp(int p);
    int n,i;
    scanf("%d",&n);
    if(n<=4) printf("empty");
    else
    {    
        for(i=2;i<n;i++)
        {
            if(spp(i)==0)
            {
                if(spp(i+2)==0) printf("%d %d\n",i,i+2);
                else continue;
            }
        }
    }
    return 0;
}
int spp(int p)
{
    int j,k=0;
    for(j=2;j<p;j++)
    if(p%j==0) k=1;
    return(k);
}
