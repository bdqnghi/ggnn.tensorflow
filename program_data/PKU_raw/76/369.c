int main(){ 
	int n,a[50000],b[50000],i,j,m; 
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]); 
} 
	for(i=0;i<n;i++){
		for(j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				m=a[j]; 
				a[j]=a[j+1]; 
				a[j+1]=m; 
				m=b[j]; 
				b[j]=b[j+1]; 
				b[j+1]=m; 
} 
} 
} 
	for(i=0;i<n-1;i++){ 
		if(b[i]<a[i+1]){
			printf("no");
			break; 
} else if(b[i+1]<b[i]){
			m=b[i]; 
			b[i]=b[i+1]; 
			b[i+1]=m;
 } 
} 
	if(i==n-1){
		printf("%d %d",a[0],b[n-1]); 
} return 0;
 } 
