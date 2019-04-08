int main() {
	int n;
	int min=10000,max=0;
	int a[10001];
	int b[10001];
	int i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		scanf("%d%d",&a[i],&b[i]);
		if(a[i]<min)
			min=a[i];
		if(b[i]>max)
			max=b[i];
	}
	for(i=1;i<n;i++) {
		for(j=0;j<n-i;j++) {
			if(a[j]>a[j+1]) {
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				
				t=b[j];
				b[j]=b[j+1];
				b[j+1]=t;
			}
		}
	}
	int mm=b[0];
	for(i=1;i<n;i++) {
		if(a[i]>mm) break;
		if(b[i]>mm) mm=b[i];
	}
	if(i==n) printf("%d %d\n",min,max);
	else printf("no\n");
	return 0;
}