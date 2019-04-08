int main(){
	int n;
	int shifou[100];
	int a,b;
	int shijian[100];
	int i,j=0;
	int k;
	for(i=0;i<100;i++){
		shijian[i]=0;
	}
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a,&b);
		if(a>=90&&a<=140&&b>=60&&b<=90){
			shifou[i]=1;
		}
		else{
			shifou[i]=0;
		}
	}
	for(i=0;i<n;i++){
		if(shifou[i]==1){
			shijian[j]+=1;
		}else{
			j++;
		}
	}
	k=j+1;
	int e;
	for(j=1;j<k;j++){
		for(i=0;i<k-j;i++){
			if(shijian[i]<shijian[i+1]){
				e=shijian[i];
				shijian[i]=shijian[i+1];
				shijian[i+1]=e;
			}
		}
	}
	printf("%d",shijian[0]);
	return 0;
}