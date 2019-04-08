int main(){
	int i,j,n,k=0,b[100],c=0,eb;
	char a[100][10],ea[10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s %d",a[i],&b[i]);
	for(j=0;j<n;j++){
	for(i=n-1;i>j;i--){
		if(b[i]>b[i-1]&&b[i]>=60){
			eb=b[i];
			b[i]=b[i-1];
			b[i-1]=eb;
			strcpy(ea,a[i]);
			strcpy(a[i],a[i-1]);
			strcpy(a[i-1],ea);
		}
	}
	}
	for(i=0;i<n;i++)
		printf("%s\n",a[i]);
	return 0;
}