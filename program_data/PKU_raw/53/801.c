int main()
{
	int n;
	scanf("%d",&n);
	int a[N],b[N],i,m,j=0,r;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);}
	
	for(i=n-1;i>=0;i--){
		m=0;
		for(r=i-1;r>=0;r--){
			if(a[i]==a[r]){
				m++;}}
		if(m==0){
         b[j]=a[i];
		 j++;}}
	for(i=j-1;i>0;i--){
		printf("%d,",b[i]);}
	printf("%d",b[0]);

	
	return 0;
}
