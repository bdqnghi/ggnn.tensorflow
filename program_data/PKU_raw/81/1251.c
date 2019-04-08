/* Note:Your choice is C IDE */
void main()
{
 int n,m,i,j,f;
 int zf[5][5];
 for(i=0;i<5;i++){
 	for(j=0;j<5;j++){
 		scanf("%d",&zf[i][j]);
 	}
 }
 scanf("%d %d", &n,&m);
 if((n>=5 || n<0) || (m>=5 || m<0)){
 	printf("error");
 }else {
  for(i=0;i<5;i++){
  	if(i==n){
  		f=m;
  	}else if(i==m){
  	f=n;
  	}else {
  	f=i;
  	}
  	for(j=0;j<5;j++){
  		if(j==0){
  		printf("%d",zf[f][j]);
  		}else if(j==4){
  		printf(" %d\n", zf[f][j]);
  		}else {
  		printf(" %d", zf[f][j]);
  		}
  	}
  }
 }
}