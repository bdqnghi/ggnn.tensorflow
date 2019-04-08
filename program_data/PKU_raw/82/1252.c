int main(){
	int n,i,l[100],r[100],wa[100]={0},z=0,max;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&l[i],&r[i]);
	}
	for(i=0;i<n;i++){
		if(l[i]>=90&&l[i]<=140&&r[i]>=60&&r[i]<=90){
			wa[z]++;
		}else{
			z++;
		}
	}
	if(l[n-1]>=90&&l[n-1]<=140&&r[n-1]>=60&&r[n-1]<=90){
		z++;
	}
	for(i=0;i<z;i++){
		if(i==0||max<wa[i]){
			max=wa[i];
		}
	}
	printf("%d\n",max);
	return 0;
}
