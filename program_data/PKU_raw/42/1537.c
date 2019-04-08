int main(){
	int shu[100000];
	int i,j,n=0,shan,shuru,a;
	scanf("%d",&shuru);
	for(i=0;i<shuru;i++){
		scanf("%d",&a);
		shu[i]=a;
	}
	scanf("%d",&shan);
	if(shuru==1){
		if(shu[0]==shan){
			n=0;
		}
		else{
			n=1;
		}
	}
	if(shuru!=1){
	  for(i=0;i<shuru;i++){
		 if(shu[i]==shan){
			for(j=i;j<shuru-1;j++){
				shu[j]=shu[j+1];
				
			}
			i=i-1;
			shuru=shuru-1;
		}
		else{
				n=n+1;
			}
	}
	}
	if(n!=0){
	for(i=0;i<n;i++){
		if(i==n-1){
		    printf("%d",shu[i]);
		}
		else{
			printf("%d ",shu[i]);
		}
	}	
	
	}
   return 0;
}