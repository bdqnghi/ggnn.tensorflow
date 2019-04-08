int main(){
int n,i,j,t=0;
char s[41][7];
double g[41],k;
scanf("%d",&n);
for(i=0;i<n;i++){
	scanf("%s ",s[i]);
	scanf("%lf",&g[i]);
	if(s[i][0]=='m'){
g[i]=g[i]-2;
t++;
}
}
for(i=1;i<=n;i++){
	for(j=0;j<n-1;j++){
		if(g[j]>g[j+1]){
            k=g[j+1];
			g[j+1]=g[j];
			g[j]=k;}
	}
}
	for(i=0;i<t;i++){
		printf("%.2lf ",g[i]+2);}
	for(i=n-1;i>t;i--){
		printf("%.2lf ",g[i]);}
	printf("%.2lf",g[t]);



return 0;
}