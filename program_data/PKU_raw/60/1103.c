int main(){
	int n,i,j,a=0,b[10000]={0},c=0;
	scanf("%d",&n);
	for(i=3;i<=n;i+=2){
		a=0;
		for(j=1;j<=i;j++){
			if(i%j==0){
				a++;
		}}
		if(a==2){
			b[c]=i;
			c++;
	}}
	for(i=0;b[i]!=0;i++){
		if(b[i]+2==b[i+1]){
			printf("%d %d\n",b[i],b[i+1]);
	}}
	if(c<2)
		printf("empty");
	return 0;
}
