int main(){
	int k;
	scanf("%d",&k);
	int jz[100][100];
	int m,n;
	
    int s[1000];
	int i,j,q;
	
	for(q=0;q<k;q++){
		scanf("%d %d",&m,&n);
		 for(i=0;i<m;i++){
			 for(j=0;j<n;j++){
		   
			    scanf("%d",&(jz[i][j]));
			}  
		}
	    for(i=0;i<m;i++){
		  s[q]+=jz[i][0];
		}
    	for(i=0;i<m;i++){
		   s[q]+=jz[i][n-1];
		}
	    for(i=0;i<n;i++){
		    s[q]+=jz[0][i];
		}
	    for(i=0;i<n;i++){
	    	s[q]+=jz[m-1][i];
		}
    	s[q]=s[q]-(jz[0][0])-(jz[0][n-1])-(jz[m-1][0])-(jz[m-1][n-1]);
	    if(q==k-1){
	     	printf("%d",s[q]);
		}else{
	    	printf("%d\n",s[q]);
		}
		m=0;
		n=0;
	}
	return 0;
}
