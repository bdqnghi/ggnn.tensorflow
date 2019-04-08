int main(){
	int sz[1000][1000],i,j,n,flag=0,row1,row2,col1,col2;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		   scanf("%d",&sz[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(sz[i][j]==0){
			     row1=i;
				 col1=j;
				 flag=1;
				 break;
			}
		}
		if(flag==1){
		    break;
		}
	}
	flag=0;
   for(i=n-1;i>=0;i--){
		for(j=n-1;j>=0;j--){
			if(sz[i][j]==0){
			     row2=i;
				 col2=j;
				 flag=1;
				 break;
			}
		}
		if(flag==1){
		    break;
		}
	}
   printf("%d",(row2-row1-1)*(col2-col1-1));

   return 0;
}