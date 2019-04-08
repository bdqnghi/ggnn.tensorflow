int main()
{
	int n,i,k,j,e,p;
	int m=0;
	int a[1000];
	int b[499500];
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<=n;j++){
		b[m]=a[i]+a[j];
		m++;
		e=m;	
		}
	}
	p=0;
	for(m=0;m<e;m++){
		if(b[m]==k){
			p++;
		}
	}
	if(p==0){
		printf("no");
	}else{
		printf("yes");
	}

	return 0;
}