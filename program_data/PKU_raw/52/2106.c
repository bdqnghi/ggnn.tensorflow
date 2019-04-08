void main()
{
	int i,k,j,n,m,a[100];
	int *p;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
    
	p=&a[n-m];
	for(k=n-m;k<n;k++,p++)
	    printf("%d ",*p);
	p=&a[0];
	for(j=0;j<n-m-1;j++,p++)
		printf("%d ",*p);
	printf("%d",a[n-m-1]);

}