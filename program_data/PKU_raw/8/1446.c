void pai(int n,int a[])
{  
    for(int i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
    for(int r=1;r<n-i;r++)
    {
    if(a[i+r]<a[i])
    {
    int k=a[i];
    a[i]=a[i+r];
    a[i+r]=k;
    }
    }
    }
}
int link(int n,int m)
{   
    int a[100]={0},b[100]={0}; 
    pai(n,a);
    pai(m,b);
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    for(int i=0;i<m-1;i++)
    printf("%d ",b[i]);
    printf("%d",b[m-1]);
}
    
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    link(n,m);
    printf("\n");
}