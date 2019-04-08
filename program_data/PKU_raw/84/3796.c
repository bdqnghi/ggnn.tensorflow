int main () {
	int a,n,i=0,b,max,secm=0;
	scanf("%d",&n);
	scanf("%d",&max);
	for (; i<n-1; i++) {
		scanf("%d",&b);
		if (max<b) {
			a=max;
			max=b;
			secm=a;
		}
		else if(b>secm){
			secm=b;
		}

	}
	printf("%d\n\n%d",max,secm);
	return 0;
}