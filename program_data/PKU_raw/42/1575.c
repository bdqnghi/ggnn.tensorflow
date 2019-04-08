int main(){
	int n,a,u[100000];

	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&u[i]);
		}
		scanf("%d",&a);
	         
		for(int i=0;i<n;i++){
			if(u[i]==a){
			  for(int j=i;j<n-1;j++){
					u[j]=u[j+1];}
				i--;
				n--;}}
		for(int i=0;i<n;i++){
			if(i==n-1){
				printf("%d",u[i]);}
			else{ 
      		printf("%d ",u[i]);}
			  }
			scanf("%d",&n);
	return 0;
	}