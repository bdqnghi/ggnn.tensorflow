int main (){
int sz[LEN][LEN];
int j,n,k,i,m,l,sum;

scanf("%d",&k);
for(l=0;l<k;l++){sum=0;
	scanf("%d%d",&m,&n);
for(i=0;i<m;i++){
	for(j=0;j<n;j++){
		scanf("%d",(&sz[i][j]));}}
i=0;
for(j=0;j<n;j++){sum+=sz[0][j];}
i=m-1;
for(j=0;j<n;j++){sum+=sz[m-1][j];}
j=0;
for(i=1;i<m-1;i++){sum+=sz[i][0];}
j=n-1;
for(i=1;i<m-1;i++){sum+=sz[i][n-1];}
 
printf("%d\n",sum);}


return 0;}