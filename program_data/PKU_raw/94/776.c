int main(){
	int a[500]={0},b[500]={0};
	int n,i,m=0,j,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	if(a[i]%2==1){
	b[m]=a[i];
	m++;
	}}
	for(j=1;j<m;j++){
for(i=0;i<m-j;i++){
if(b[i]>b[i+1]){
temp=b[i];
b[i]=b[i+1];
b[i+1]=temp;
}
}
}  
	printf("%d",b[0]);
	for(j=1;j<m;j++){
	printf(",%d",b[j]);
	}
		return 0;
}