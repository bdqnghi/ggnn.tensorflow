int main(){
int sz[100][100],m,n,i,j,k,time;
time=0;
scanf("%d%d",&m,&n);
for(i=0;i<m;i++){
	for(j=0;j<n;j++){
		scanf("%d",&sz[i][j]);
	}
}
for(k=0;k<=1000000;k++){if(time==n*m){break;}

for(i=k;i<n-k;i++){
	
	if(time==n*m){break;}
	printf("%d\n",sz[k][i]);time++;
	
}
for(i=1+k;i<m-k;i++){
	
	if(time==n*m){break;}
	printf("%d\n",sz[i][n-1-k]);time++;
    
}
for(i=n-2-k;i>=k;i--){
	
	if(time==n*m){break;}
	printf("%d\n",sz[m-1-k][i]);time++;
	
}
for(i=m-2-k;i>=1+k;i--){

	if(time==n*m){break;}
	printf("%d\n",sz[i][k]);time++;
	
}

	
}
return 0;}
