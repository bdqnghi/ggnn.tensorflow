int main(){
	int n,a,b,sa=0,sb=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d%d", &a,&b);
		if(a==0){
			if(b==0){
				sa=sa+1;
				sb=sb+1;
			}else if(b==1){
				sa=sa+1;
			}else{
				sb=sb+1;
			} 
		}else if(a==1){
			if(b==1){
				sa=sa+1;
				sb=sb+1;
			}else if(b==2){
				sa=sa+1;
			}else{
				sb=sb+1;
			} 
		}else{
			if(b==2){
				sa=sa+1;
				sb=sb+1;
			}else if(b==0){
				sa=sa+1;
			}else{
				sb=sb+1;
			}
	}}
	if(sa>sb){
		printf("A");
	}else if(sa<sb){
		printf("B");
	}else{
		printf("Tie");
	}
	return 0;
}
