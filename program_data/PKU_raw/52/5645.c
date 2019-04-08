int main()
{
	int a[100],m,n,i,b[100];
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        b[i]=a[n-m+i];
    }
    for(i=m;i<n;i++)
    {
        b[i]=a[i-m];
    }
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            printf("%d",b[0]);
        }
        else
        {
            printf(" %d",b[i]);
        }
    }
    return 0;
}