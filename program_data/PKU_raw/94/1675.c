int main(){
	int n,a[10000],b[10000],num=0,i,k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&(a[i]));
	}
	for(i=0;i<n;i++){
		if(a[i]%2!=0){
			b[k]=a[i];
			num++;
			k++;
		}
	}
	for(int p=1;p<=num;p++){
		int min,e;
		min=0;
		for(k=0;k<=num-p;k++){
			if(b[min]>b[k]){
				min=k;
			}
		}
		if(min!=num-p){
			e=b[min];
			b[min]=b[num-p];
			b[num-p]=e;
		}
		if(p!=num){
			printf("%d,",b[num-p]);
		}
		if(p==num){
			printf("%d",b[num-p]);
		}
	}
	return 0;
}