

void main()
{
	int n,a[MAX];
	int *p;
	scanf("%d",&n);
	for(p=a;p<a+n;p++)
		scanf("%d",p);
	
	for(p=a+n-1;p>=a;p--){
		if(p==a+n-1)
			printf("%d",*p);
		else
			printf(" %d",*p);
	}
	printf("\n");
}
