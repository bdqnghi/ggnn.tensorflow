int main() {
	int n,i,a=0,begin[50000],end[50000],min,max;
	double b;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d%d",&begin[i],&end[i]);
	min=begin[0];
	max=end[0];
	for(i=0;i<n;i++){
		if(begin[i]<=min)
			min=begin[i];
		if(end[i]>=max)
			max=end[i];
	}
    for(b=min*1.0+0.1;b<max;b+=1.0){
		for(i=0;i<n;i++){
			if(b>begin[i]&&b<end[i]){
				a++;
				break;
			}
		}
	}
	if(a==max-min){
		printf("%d %d\n",min,max);
	}else{
		printf("no");
	}
	return 0;
}
