int main(){
	int a[5][5];
	int i,j,x[5],y[5],b,c,k=0;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<5;i++){
		b=a[i][0];
		x[i]=0;
		for(j=1;j<5;j++){
			if(a[i][j]>b){
				x[i]=j;
				b=a[i][j];
			}
		}
	}
	for(j=0;j<5;j++){
		c=a[0][j];
		y[j]=0;
		for(i=1;i<5;i++){
			if(a[i][j]<c){
				y[j]=i;
				c=a[i][j];
			}
		}
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(x[i]==j&&y[j]==i){
				printf("%d %d %d",i+1,j+1,a[i][j]);
				k++;
			}
		}
	}
	if(k==0){printf("not found");}
	return 0;
}