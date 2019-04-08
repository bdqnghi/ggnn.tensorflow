int main(){
	int n,k;
	int xl[1000];
	int i;
	int result;
	int a=0,b=0;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&xl[i]);
	}
	for(i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			result=xl[i]+xl[j];
			if(result==k){
			    a++;
			}else{
			    b++;
			}
		}
	}
	if(a>0){
		printf("yes\n");
	}else{
		printf("no\n");
	}
	return 0;
}
