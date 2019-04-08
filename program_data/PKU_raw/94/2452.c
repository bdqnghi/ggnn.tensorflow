int main(){
	int n,i,a[100],k,e,s;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	scanf("%d",&a[i]);
	for( k = 1 ; k <= n ; k++){
	for( i = 0; i < n - k; i++){
			if(a[i]>a[i+1]){
					e = a[i+1];
				a[i+1] = a[i];
					a[i] = e;
			}
	}}
	for( i = 0; i < n - 1; i++){
	if(a[i]%2!=0)
		s=i;}
for( i = 0; i < s; i++){
	if(a[i]%2!=0)
		printf("%d,",a[i]);
}
printf("%d",a[s]);
return 0;
}
