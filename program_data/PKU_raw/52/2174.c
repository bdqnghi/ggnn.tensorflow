void Move(int *num,int n)
{
    int *p;
    for(p=num+n-1;p>=num;p--)
       {
        *(p+1)=*p;
        }
    num[0]=num[n];
}

int main()
{
    int m,n,num[101];
    int i;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
       scanf("%d",num+i);
    for(i=0;i<m;i++)
       Move(num,n);
    for(i=0;i<n-1;i++)
       printf("%d ",num[i]);
    printf("%d",num[i]);
    return 1;
}                   
        
