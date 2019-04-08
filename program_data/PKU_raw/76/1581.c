int main(){
	int n,a[LEN],b[LEN],i,k,s=0;
	int min,max;
	double x;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a[i],&b[i]);
	}
	min=a[0];
	max=b[0];
	for(i=1;i<n;i++){
		if(a[i]<=min){
			min=a[i];
		}
		if(b[i]>=max){
			max=b[i];
		}
	}
	for(x=min;x<=max;x+=0.5){
		for(k=0;k<n;k++){
			if(x>=a[k]&&x<=b[k]){
				s++;
				break;
			}
		}
	}
	if(s!=2*(max-min)+1){
		printf("no");
	}else{
		printf("%d %d",min,max);
	}
	return 0;
}