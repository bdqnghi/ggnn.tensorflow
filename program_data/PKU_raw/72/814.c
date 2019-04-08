int main ()
{
	int i,j,m,n,h,g,l,k,p=0,z=0;
	 
	int sz[20][20];

	int e[400],f[400];
	
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&sz[i][j]);
	}
	}
	for(i=1;i<m-1;i++){
		for(j=1;j<n-1;j++){
			if(sz[i][j]>=sz[i][j-1]&&sz[i][j]>=sz[i][j+1]&&sz[i][j]>=sz[i-1][j]&&sz[i][j]>=sz[i+1][j]){
				e[z]=i;
				f[z]=j;
				z++;
				

				
			}
		}
	}

			if(sz[0][0]>=sz[0][1]&&sz[0][0]>=sz[1][0]){

				e[z]=0;
				f[z]=0;
				z++;
				
			}
			if(sz[m-1][0]>=sz[m-2][0]&&sz[m-1][0]>=sz[m-1][1]){
				e[z]=m-1;
				f[z]=0;
				z++;
				
			}
			if(sz[0][n-1]>=sz[0][n-2]&&sz[0][n-1]>=sz[1][n-1]){
				e[z]=0;
				f[z]=n-1;
				z++;
				
			}
			if(sz[m-1][n-1]>=sz[m-2][n-1]&&sz[m-1][n-1]>=sz[m-1][n-2]){
				e[z]=m-1;
				f[z]=n-1;
				z++;
				
			}

	for(i=1;i<m-1;i++){
		if(sz[i][0]>=sz[i+1][0]&&sz[i][0]>=sz[i-1][0]&&sz[i][0]>=sz[i][1]){
				e[z]=i;
				f[z]=0;
				z++;
			
		}
	}
	for(j=1;j<n-1;j++){
			if(sz[0][j]>=sz[0][j+1]&&sz[0][j]>=sz[0][j-1]&&sz[0][j]>=sz[1][j]){
				e[z]=0;
				f[z]=j;
				z++;
				
		}
	}
	for(i=1;i<m-1;i++){
		if(sz[i][n-1]>=sz[i+1][n-1]&&sz[i][n-1]>=sz[i-1][n-1]&&sz[i][n-1]>=sz[i][n-2]){
				e[z]=i;
				f[z]=n-1;
				z++;
				
		}
	}
	for(j=1;j<n-1;j++){
		if(sz[m-1][j]>=sz[m-1][j+1]&&sz[m-1][j]>=sz[m-1][j-1]&&sz[m-1][j]>=sz[m-2][j]){
				e[z]=m-1;
				f[z]=j;
				z++;
				
		}
		}
	for(k=1;k<=z;k++){
		for(i=0;i<z-k;i++){
			if(e[i]>e[i+1]){
				g=e[i];
				e[i]=e[i+1];
				e[i+1]=g;
				h=f[i];
				f[i]=f[i+1];
				f[i+1]=h;
				
	}
	}
	}
	for(k=1;k<=z;k++){
		for(p=0;p<z-k;p++){
			 if(f[p]>f[p+1]&&e[p]==e[p+1]){
				l=f[p];
				f[p]=f[p+1];
				f[p+1]=l;
				

			}
		}
	}
    
	for(p=0;p<z;p++){
	
		printf("%d %d\n",e[p],f[p]);
	}
	

	return 0;

}



