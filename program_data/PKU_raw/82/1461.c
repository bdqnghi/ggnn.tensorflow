int main(){
	int n,a[101],b[101],i,j=0,c[101],max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a[i],&b[i]);
	}
	for(i=0;i<101;i++){
	c[i]=0;
	}
	for(i=0;i<n;i++){
		if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90){
		c[j]++;
		}else{
			j++;
		}
	}
	for(i=0;i<101;i++){
		if(c[i]>c[max]){
			max=i;
		}
	}
	printf("%d",c[max]);
	return 0;
}