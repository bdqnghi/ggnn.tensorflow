int main()
{
	int n,i,j,m;
	int a[50000],b[50000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a[i],&b[i]);
	}
	for(i=1;i<n;i++){
		for(j=0;j<n-i;j++){
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
	m=b[0];
	for(i=0;i<n-1;i++){
		if(m<a[i+1]){
			printf("no");
                            break;
		}else{
			if(m<b[i+1]){
				m=b[i+1];
			}
		}
	}
         if(i==n-1){
	printf("%d %d",a[0],m);
         }
    return 0;
}