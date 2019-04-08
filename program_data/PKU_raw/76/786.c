int main(){
int t[50001][2];
int r[10001];
int n,k,i,j,x,y,sum=1;
for(i=0;i<10001;i++){
	r[i]=0;
}
scanf("%d",&n);
for(i=0;i<n;i++){
	for(j=0;j<2;j++){
	scanf("%d",&t[i][j]);
	}
	for(k=t[i][0];k<t[i][1];k++){
		r[k]=1;
	}
}
for(i=0;i<10001;i++){
	if(r[i]==1){
	   x=i;
	   break;
	   }
}
for(i=10000;i>0;i--){
	if(r[i]==1){
	   y=i;
	   break;
	   }
}
for(i=x;i<y;i++){
       sum=sum*r[i];
 }
if(sum==1)
printf("%d %d",x,y+1);
else
printf("no");
return 0;
}
