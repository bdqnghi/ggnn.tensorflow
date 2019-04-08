int main(){
	int n,a,b,i,x[100]={0},y[100]={0},s=0,k,m,e; 
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a,&b);
		if((a>=90&&a<=140)&&(b<=90&&b>=60)){
			x[i]=1;
		}
	}
	for(i=0;i<n;i++){
		if(x[i]==1){
			while(x[i]==1){
				y[s]=y[s]+1;
				i++;
			}
			s=s+1;
		}
	}
	for(k=1;k<=s;k++){
		for(m=0;m<s-k+1;m++){
			if(y[m]<y[m+1]){
				e=y[m];
				y[m]=y[m+1];
				y[m+1]=e;
			}
		}
	}
	printf("%d",y[0]);
	return 0;
}
