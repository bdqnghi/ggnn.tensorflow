int main()
{
	int n,i,a[100],c[100],k=0;
	int t=0,j,b[100]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		t=a[i];
		for(j=1;j<n-i;j++){
			if(a[i+j]==t){
				b[i+j]=1;
			}
		}
	}
	for(i=0;i<n;i++){
		if(b[i]==0){
			c[k]=a[i];
			k++;
		}
	}
	for(i=0;i<k-1;i++){
		printf("%d,",c[i]);
	}
	printf("%d",c[k-1]);
	return 0;
}

