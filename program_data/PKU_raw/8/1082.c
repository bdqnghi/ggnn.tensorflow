int a[100]={0},b[100]={0};
int i=0,n,m;
void block_in()
{
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<m;i++) scanf("%d",&b[i]);
}

void arr(int x,int c[])
{
    int i=0,j=0,mid;
    for(i=0;i<x;i++)
    {
        for(j=0;j<x-i;j++)
        {
            if(c[j]>c[j+1])
            {
                mid=c[j];
                c[j]=c[j+1];
                c[j+1]=mid;
            }
        }
    }
    for(i=1;i<=x;i++)
    {
        printf("%d",c[i]);
        if(i<x) printf(" ");
    }
}
void main()
{
    block_in();
    arr(n,a);
    printf(" ");
    arr(m, b);
    
}