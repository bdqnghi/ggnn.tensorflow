int main(){
	int n,i,j,e;
	int sz[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);}
	
		for(j=0;j<(n/2);j++){
                       e=sz[j];
	              sz[j]=sz[n-j-1];
		     sz[n-j-1]=e;}
                   for(j=0;j<n;j++){if(j==0){
                           printf("%d",sz[j]);}
                   else{
	                  printf(" %d", sz[j]);}}
return 0;
}