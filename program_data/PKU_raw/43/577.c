void main() {
	int m,n,i,k,a[10000],j = 0,p;
	scanf("%d",&m);
	for (n = 3;n < m;n+=2) {
		k=sqrt(n);
		for (i = 2;i <= k;i++)
			if (n%i == 0) break;
		if (i >= k+1) a[j++] = n;
	}
	for (i = 0;i < j-1;i++)
		for (p = i;p < j;p++)
			if (a[i]+a[p] == m) printf("%d %d\n",a[i],a[p]);
}
