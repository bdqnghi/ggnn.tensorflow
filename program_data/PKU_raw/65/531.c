int main(){
	int n,i,z,a=0,b=0;
	int sa[100],sb[100];
		scanf("%d",&n);
	for(i=0;i<n;i++){
	scanf("%d%d",&sa[i],&sb[i]);
	}
	for(i=0;i<n;i++){
		if(sa[i]==0&&sb[i]==1){
a=a+1;}
	else if(sa[i]==1&&sb[i]==0){
	b=b+1;}
	else if(sa[i]==1&&sb[i]==2){
		a=a+1;}
	else if(sa[i]==2&&sb[i]==1){
		b=b+1;}
	else if(sa[i]==0&&sb[i]==2){
	b=b+1;}
	else if(sa[i]==2&&sb[i]==0){
	a=a+1;}
	 else if(sa[i]==sb[i]){
	z=0;
	}
}
	if(a>b){
	printf("A");}
else if(a<b){
	printf("B");}
else if(a=b){
	printf("Tie");}
	return 0;}