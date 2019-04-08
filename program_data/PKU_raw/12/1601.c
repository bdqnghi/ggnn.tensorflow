int main(){
	int a[100][16],i,j,m,p,q;
	for(i=0;i<100;i++){
		for(j=0;j<16;j++){
			scanf("%d",&a[i][j]);
			if(a[i][j]<=0) break;
		}
		m=0;
		for(p=0;p<j;p++){
			for(q=0;q<j;q++){
				if(a[i][q]==2*a[i][p]) m++;
			}
		}
		if(a[i][j]==-1) break;printf("%d\n",m);
		
	}
	return 0;
}