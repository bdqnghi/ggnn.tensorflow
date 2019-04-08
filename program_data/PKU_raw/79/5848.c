int hs(int n,int m){
int i,k=0;
for(i=2;i<=n;i++){
	k=((m%i)+k)%i;}
return k;
}	
int main(){
	int m,n,h=0;
	int a[100],j=0,y=0;
	while(h==0){
	scanf("%d %d",&n,&m);
	if((n==0)&&(m==0)){
	h=1;
	}
	a[j]=hs(n,m)+1;
		j++;
		y+=1;
		}
	for(j=0;j<y-1;j++){
	printf("%d\n",a[j]);}
	return 0;
}
