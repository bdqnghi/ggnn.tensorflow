void move(int n,int m,int a[100])
{
         int i;
         for(i=n-1;i>=0;i--)
             a[i+m]=a[i];
         for(i=0;i<=m-1;i++)
              a[i]=a[n+i];
         for(i=0;i<n-1;i++)
         printf("%d ",a[i]);
         printf("%d",a[n-1]);
}
         
void main()
{
	int n,m,i,a[100]={0};
	scanf("%d %d",&n,&m);
	for(i=0;i<=n-1;i++)
	scanf("%d",&a[i]);
         move(n,m,a);
}
