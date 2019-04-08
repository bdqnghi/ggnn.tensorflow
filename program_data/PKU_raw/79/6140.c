main(){
	int k;
	int a[300][300];
		for(k=0;k<300;k++){
		int n,m,i,j;
		scanf("%d %d",&n,&m);
		if(n==0&&m==0) break;
		if(n==1) {
		printf("1\n");continue;}
		for(i=0;i<300;i++){
			for(j=0;j<300;j++){a[i][j]=0;}}
		for(i=0;i<n;i++) a[0][i]=i+1;
		for(i=1;i<n-1;i++){
			for(j=0;j<n-i;j++){
				if((m+j)<(n-i+1)) a[i][j]=a[i-1][m+j];
				else a[i][j]=a[i-1][(m+j)%(n-i+1)];}}
		if(m%2==1)printf("%d\n",a[n-2][1]);
		else{printf("%d\n",a[n-2][0]);}
			
			}
	

} 