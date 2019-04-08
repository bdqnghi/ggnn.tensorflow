int main(){
	int i,n,m,a[100]={0};
	int *p;
	scanf("%d%d",&n,&m);
	for (i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	p=&a[n-m+1];
	for (;p<=&a[n];p++){
		printf("%d ",*p);
	}
	for (p=&a[1];p<=&a[n-m];p++){
		if (p!=&a[n-m])
			printf("%d ",*p);
		else printf("%d",*p);
	}
	return 0;
}
