int main()
{
int sz[5][5],i,j,m,n,h,k,s;
s=0;
for(i=0;i<5;i++){
	for(j=0;j<5;j++){
		scanf("%d",&sz[i][j]);
	}
}
for(i=0;i<5;i++){
    	if(sz[i][0]<sz[i][1]){
			m=sz[i][1];
			n=1;
		}else{
			m=sz[i][0];
			n=0;
		}
	for(j=2;j<5;j++){
	
		if(sz[i][j]>m){			
			m=sz[i][j];
			n=j;
		}
		k=0;
		if(j==4){
			for(h=0;h<5;h++){
		    	 if(sz[h][n]>=sz[i][n]){
                    k++;
				 }else{
			       	break;
				 }
			}
    	 	if(k==5){
	    		printf("%d %d %d",i+1,n+1,sz[i][n]);
		    	s=1;
			}
		}
	}
}
	if(s==0){
			printf("not found");
		}
	return 0;
}

