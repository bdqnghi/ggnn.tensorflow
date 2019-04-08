int main(){
	int n,i,a[100],b[100],j,t;
	char c=',';
	scanf("%d",&n);
	for (i=0;i<n;i++){
		b[i]=0;
		scanf("%d",&a[i]);
		if (a[i]%2!=0)
			b[i]=a[i];
		continue;
	}
	for (i=0;i<n-1;i++){
		for (j=i+1;j<n;j++){
			if (b[i]>b[j]){
				t=b[i];
				b[i]=b[j];
				b[j]=t;
			}
		}
	}
	for (i=0;i<n-1;i++){
		if (b[i]!=0)
			printf("%d%c",b[i],c);
		else continue;
	}
	printf("%d",b[n-1]);
	return 0;
}
