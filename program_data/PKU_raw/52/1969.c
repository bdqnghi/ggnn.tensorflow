void main()
{
    int n,m,a[100],*p,i,t;
    scanf("%d %d",&n,&m);
    for(p=a;p<a+n;p++)
    scanf("%d",p);
    
    for(i=0;i<n-m;i++)
    {
    	t=a[0];
    	for(p=a;p<a+n-1;p++)
    	*p=*(p+1);
    	a[n-1]=t;
    }
    for(p=a;p<a+n-1;p++)
    printf("%d ",*p);
    printf("%d",a[n-1]);
}