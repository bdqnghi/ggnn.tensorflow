int zl[1000][1000];
int main(){
    int i,j,n,a,b,s;
	scanf("%d",&n);
    for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&zl[i][j]);
		}
	}
    for(i=0;i<n-1;i++){
		for(j=0;j<n-1;j++){
			if(zl[i][j]==0){
	            break;
			}
		 }
	 if(zl[i][j]==0){
				
	            break;
			} 
}
a=i;
b=j; 
	for(i=n-1;i>0;i--){
		 for(j=n-1;j>0;j--){
		    if(zl[i][j]==0){
			 break;
			}
		}
	if(zl[i][j]==0){
			 break;
			}
}
    s=(i-a-1)*(j-b-1);
	printf("%d\n",s);
	return 0;
}