int main(){
	int n,i,e=0,min=0,max=0,a[50000],b[50000];
	double k;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a[i],&b[i]);
    }
    for(i=0;i<n;i++){
		if(a[i]<a[min]){
			min=i;}
		if(b[i]>b[max]){
			max=i;}
	}
	for(k=a[min]+1.0/2;k<b[max];k++){
                e=0;
		for(i=0;i<n;i++){
			if(k>=a[i]&&k<=b[i]){
			e=1;}
		}
		if(e==0){break;}
	}
	if(e==1){
		printf("%d %d",a[min],b[max]);}
	else{printf("no");}
return 0;
}