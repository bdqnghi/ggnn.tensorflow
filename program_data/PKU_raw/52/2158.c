void main()
{
	int n,m,i,temp;
	int a[100];
	int *p;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++){
		temp=a[n-1];
		for(p=a+n-1;p>a;p--){
			*p=*(p-1);
		}
		a[0]=temp;
	}
	for(i=0;i<n-1;i++){
		printf("%d ",a[i]);
	}
	printf("%d\n",a[n-1]);

}