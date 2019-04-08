int main(){
	int n,i,a=0,b=0;
	int ai[200],bi[200];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&ai[i],&bi[i]);
	}
	for(i=0;i<n;i++){
		if((bi[i]-ai[i]==1)||(ai[i]-bi[i]==2)){
			a++;
		}else if(ai[i]==bi[i]){
			a=a+0;
		}else{
			b++;
		}
	}
	if(a>b){
		printf("A");
	}else if(a<b){
		printf("B");
	}else{
		printf("Tie");
	}



	return 0;
}