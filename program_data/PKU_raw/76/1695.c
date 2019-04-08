int main(){
	int i,j,n,k,m,s,a[50000],b[50000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
	}
	for(i=1;i<=n-1;i++){
		for(j=0;j<n-i;j++){
			if(a[j]>a[j+1]){
				k=a[j];
				a[j]=a[j+1];
				a[j+1]=k;
				m=b[j];
				b[j]=b[j+1];
				b[j+1]=m;
			}
		}
	}
	for(i=0;i<n;i++){
		if(b[i]<a[i+1]){
			s=0;
			break;
		}else{
			if(b[i]<b[i+1]){
				s=1;
				continue;
			}else{
				b[i+1]=b[i];
				s=1;
				continue;
			}
		}
	}
	if(s==0){
		printf("no");
	}else{
		printf("%d %d",a[0],b[n-1]);
	}
	return 0;
}

