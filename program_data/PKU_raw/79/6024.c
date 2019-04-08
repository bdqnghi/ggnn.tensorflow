int main(int argc, char* argv[])
{
	int sz[300];
	int n,m,i,k,j,szhe=0,add=0,XS;
	while(1){
		scanf("%d %d",&n,&m);
		if(n==0&&m==0){
		break;
		}
		for(i=0;i<n;i++){
		sz[i]=1;
		}
		for(i=0;i<n;i++){
			szhe=0;
			for(k=0;k<n;k++){		
			szhe=szhe+sz[k];
			}
			if(szhe!=1){
				if(sz[i]!=0){
					add++;			
				if(add==m){
				sz[i]=0;
				add=0;
				}}
			}else if(szhe==1){
				for(j=0;j<n;j++){
					if(sz[j]==1){
						XS=j+1;
					}
				}
			printf("%d\n",XS);
			break;

			}
			if(i==n-1){
			i=-1;
			}
	}}
	
	return 0;
}
