int main(){
	int n,m,i,j,s[8][8],a,b,c=0,t;
	scanf("%d,%d",&n,&m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&s[i][j]);
		}
	}
	for(i=0;i<n;i++){
		t=s[i][0];
		a=i;
		b=0;
		for(j=0;j<m;j++){
			if(s[i][j]>t){
				t=s[i][j];
				b=j;
			}
		}
		for(i=0;i<n;i++){
			if(t>s[i][b]){
				c=1;
			}
		}
		if(c==0){
			printf("%d+%d",a,b);
			c=2;
		}
	}
	if(c!=2){
		printf("No");
	}


	return 0;
}