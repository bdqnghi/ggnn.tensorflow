char zf[1001][1001];
int main(){
int m,n,i,j,k,p=0;

scanf("%d",&n);
for(i=0;i<n;i++){
	scanf("%s",zf[i]);
   // printf("%s\n",zf[i]);
}
scanf("%d",&m);
//printf("%d",m);
for(k=0;k<m-1;k++){
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
    if(zf[i][j]=='.'&&(zf[i-1][j]=='@'||zf[i][j-1]=='@'||zf[i+1][j]=='@'||zf[i][j+1]=='@')){
		zf[i][j]='*';
		}
	}
	}
 for(i=0;i<n;i++){
	for(j=0;j<n;j++){
	if(zf[i][j]=='*'){
	zf[i][j]='@';
	}
	}
 }
    /* printf("%d\n",k);
     for(i=0;i<n;i++){
     	printf("%s\n",zf[i]);
	 }*/

}
for(i=0;i<n;i++){
	for(j=0;j<n;j++){
		if(zf[i][j]=='@'){
		p++;
		}
	}
}
printf("%d\n",p);
return 0;
}