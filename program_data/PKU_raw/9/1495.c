int main(){
	int i,n,j,k,e,m;
	int a[100];

	char b[100][10];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %d",&b[i],&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=n-1;j>i;j--){
			if(a[j]>=60&&a[j]>a[j-1]){
				m=a[j];
				a[j]=a[j-1];
				a[j-1]=m;
				char t[10];
		
				strcpy(t,b[j]);
				strcpy(b[j],b[j-1]);
				strcpy(b[j-1],t);
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%s\n",b[i]);
	}
	return 0;
}