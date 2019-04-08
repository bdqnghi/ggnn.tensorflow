int main(){
	int m,n,i,j,a,b,c,d;
	int s[10001]={0};;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d %d",&a,&b);
		for(j=a+1;j<=b-1;j++){
			s[j]=1;
		}
		if(s[a]==0){
			s[a]=2;
		}
		else s[a]=1;
		if(s[b]==0){
			s[b]=2;
		}
		else s[b]=1;
	}
	for(i=1;i<10001;i++){
		if(s[i]!=0){
			c=i;
			break;
		}
	}
	for(i=10000;i>=1;i--){
		if(s[i]!=0){
			d=i;
			break;
		}
	}
	for(i=c+1;i<=d-1;i++){
		if((s[i]==0)||(s[i]==2)){
			printf("no\n");
			break;
		}

	}
	if(i==d) printf("%d %d\n",c,d);
	return 0;
}