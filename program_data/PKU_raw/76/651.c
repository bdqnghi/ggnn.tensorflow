int main(){
	int a[50000];
	int b[50000];
	int n,i,j,min,max,sum,s;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&(a[i]),&(b[i]));
	}
	max=a[0];
	for(i=1;i<n;i++){
		if(max<a[i]){
			max=a[i];
		}
	}
	min=a[0];
	for(i=1;i<n;i++){
		if(min>a[i]){
			min=a[i];
		}
	}
	for(i=1;i<n;i++){
		if(max<b[i]){
			max=b[i];
		}
	}
	for(i=1;i<n;i++){
		if(min>b[i]){
			min=b[i];
		}
	}
	double d;
	s=0;
	for(d=min+0.1;d<max;d++){
        sum=0;
		for(j=0;j<n;j++){
			if(d>=a[j]&&d<=b[j]){
			sum++;
			}
		}
		if(sum==0){
	    printf("no\n");
        break;
		}else{
		s++;
		}
	}
	if(s==(max-min)){
	printf("%d %d",min, max);
	}
	return 0;
}