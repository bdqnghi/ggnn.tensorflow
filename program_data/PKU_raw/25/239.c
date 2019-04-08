int main(){
	int n,i,j,b[1000];
	scanf("%d",&n);
	b[0]=1;
	for(i=1;i<1000;i++){
		b[i]=0;
	}
	for(i=0;i<n;i++){
		j=1;
		b[0]=b[0]*2;
		for(j=1;1;j++){
			if(b[j]==0&&b[j+1]==0&&b[j+2]==0){
				b[j]=b[j-1]/10;
				b[j-1]=b[j-1]%10;
				break;
			}
			b[j]=b[j]*2+b[j-1]/10;
			b[j-1]=b[j-1]%10;
		}
	}
	if(n!=0){
	if(b[j]==0){
		j=j-1;
	}
	for(i=j;i>=0;i--){
		printf("%d",b[i]);
	}
	}
	if(n==0){
		printf("1");
	}
	return 0;
}


