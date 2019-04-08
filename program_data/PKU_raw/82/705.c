
int main(){
	int n;

	scanf("%d\n",&n);
	int sz[100][100];
	int jg[100]={0};
	for(int i=0;i<n;i++){
		scanf("%d %d",&sz[i][0],&sz[i][1]);
	}
	
	int t=0;
	int p=0;
	
	for(int k=0;k<=n;k++){
		if((sz[k][0]<=140)&&(sz[k][0]>=90)&&(sz[k][1]>=60)&&(sz[k][1]<=90)){
			jg[t]++;
		}else{
			t+=2;
		}
	}
	for(int q=0;q<(t+1);q++){
		int e;
		if(jg[q]>jg[q+1]){
			e=jg[q];
			jg[q+1]=jg[q];
			e=jg[q];
		}
	}
	
	printf("%d",jg[t+1]);
return 0;
}
	
		
