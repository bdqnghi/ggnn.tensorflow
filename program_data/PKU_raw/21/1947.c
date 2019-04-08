
void main(){
	unsigned int n,i,a,tot=0,min=65535,max=0;
	float avg;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a);
		tot+=a;
		if(min>a) min=a;
		if(max<a) max=a;
	}
	avg=(float)tot/n;
	if(avg-min>=max-avg){
		printf("%d",min);
		if(avg-min==max-avg)
			printf(",%d",max);
	}
	else
		printf("%d",max);
}