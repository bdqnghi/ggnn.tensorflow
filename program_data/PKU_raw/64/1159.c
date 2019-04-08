int main(){
	int n,i,j,c,d,s[10][3],k,f;
	double a[10][10],e;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<3;j++){
			scanf("%d",&s[i][j]);
	}}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			a[i][j]=sqrt(pow(s[i][0]-s[j][0],2)+pow(s[i][2]-s[j][2],2)+pow(s[i][1]-s[j][1],2));
	}}
	e=0;f=(n*n-n)/2;
	for(k=1;k<=f;k++){
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				if(e<a[i][j]){
					e=a[i][j];
					c=i;
					d=j;
		}}}
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",s[c][0],s[c][1],s[c][2],s[d][0],s[d][1],s[d][2],e);
		e=0;
		a[c][d]=0;
		c=0;
		d=0;
	
	}
	return 0;
}
