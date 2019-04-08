int n,m;
int main()
{
    int i,j,k;
    int way(int m,int n);
    scanf("%d",&j);
    for(i=0;i<j;i++)
    {
     scanf("%d %d",&m,&n);
     k=way(m,n);
     printf("%d\n",k);
     }
}
int way(int m,int n)
{
    int z;
    if(n==1||m==1||m==0) z=1;
    else
    {
     if(m<n) z=way(m,m);
     else z=way(m,n-1)+way(m-n,n);
     }
    return(z);
}
