void main()
{
	int n,i,j,m;
	int b[20000];
	scanf("%d%d",&n,&b[0]);
	printf("%d",b[0]);
    for(i=1;i<=n-1;i++){
		scanf("%d",&b[i]);
		for(j=0;j<=i-1;j++){
			if(b[i]==b[j]){
				b[i]=0;
			}
		}
	}
	for(m=1;m<n;m++){
		if(b[m]!=0){
		printf(" %d",b[m]);
	}
	}
}
