
int main(){
	int n,i,j=0,k=0,l;
	float a[40]={0},b[40]={0},t=0;
	char s1[4]={'m','a','l','e'};
	char s2[6]={'f','e','m','a','l','e'};
	char s3[4];
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		scanf("%s",s3);
	
		if(strcmp("male",s3)==0){
			scanf("%f",&a[j]);j++;}
			else {
			scanf("%f",&b[k]);k++;}
		
		}
for(i=j-1;i>0;i--){
	for(l=0;l<i;l++){
		if(a[l]>a[l+1]){
			t=a[l];
			a[l]=a[l+1];
			a[l+1]=t;
		}
	}
}
t=0;
for(i=k-1;i>0;i--){
	for(l=0;l<i;l++){
		if(b[l]<b[l+1]){
			t=b[l];
			b[l]=b[l+1];
			b[l+1]=t;
		}
	}
}
	printf("%.2f",a[0]);
	for(i=1;i<j;i++){
		printf(" %.2f",a[i]);}
	for(i=0;i<k;i++){
		printf(" %.2f",b[i]);}
}
