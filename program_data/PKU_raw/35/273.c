int main(){
	int a[8][8];
	int m,n,i,j,k;
	int b[8];
	int x[8];
	int y[8];
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++){
		b[i]=a[i][0];
		x[i]=1;
		y[i]=i+1;
		for(j=1;j<n;j++){
			if(a[i][j]-b[i]>0){
				b[i]=a[i][j];
				x[i]=j+1;}
		}
	}

	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			if(b[i]-a[j][x[i]-1]>0)
				b[i]=-1;
		}
	}
	k=0;
	for(i=0;i<m;i++){
		k+=b[i];}
	if(k+m==0)
		printf("No");
	else{
		for(i=0;i<m;i++){
			if(b[i]!=-1)
				printf("%d+%d\n",y[i]-1,x[i]-1);
		}
	}
	return 0;
}