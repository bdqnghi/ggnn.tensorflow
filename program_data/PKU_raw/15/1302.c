int main(){
	int a[100][100],n,i,j,b,c,d,e,s;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if((a[i][j]!=0)&&(a[i][j+1]==0)){
				b=i;
				c=j+1;
			}
			if((a[i][j]==0)&&(a[i][j+1]!=0)){
				d=j;
				i=n;
			}
		}
	}
	for(j=0;j<n;j++){
		for(i=0;i<n;i++){
			if((a[i][j]==0)&&(a[i+1][j]!=0)){
				e=i;
				j=n;
			}
		}
	}
	s=(d-c+1)*(e-b+1)-(4+(d-c-1)*2+(e-b-1)*2);
	printf("%d",s);
	return 0;
}