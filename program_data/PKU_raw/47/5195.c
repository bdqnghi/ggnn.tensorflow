void main()
{
	int i,n;
	scanf("%d",&n);
	int a[100];
	int *p=a;
	int *e=p+(n-1);
	for(i=0;i<n;i++,p++)
 		scanf("%d",p);
	for(i=0;i<n-1;i++,e=e-1)
		printf("%d ",*e);
	printf("%d",*e);
}