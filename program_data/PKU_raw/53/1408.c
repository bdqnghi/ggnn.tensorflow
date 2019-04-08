int main(){
	int a[300];
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(i==0)
			printf("%d",a[i]);
		for(j=0;j<i;j++){
			if(a[i]==a[j])
				break;
			if(j==i-1)
				printf(",%d",a[i]);
		}
	}
	return 0;
}

