

void main()
{
	int n,a[MAX];
	int *p;
	scanf("%d",&n);
	for(p=&a[0];p<&a[0]+n;p++)
		scanf("%d",p);
	
	for(p=&a[0]+n-1;p>=&a[0];p--){
		if(p==&a[0]+n-1)
			printf("%d",*p);
		else
			printf(" %d",*p);
	}
	printf("\n");
}
