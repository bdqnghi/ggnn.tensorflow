int main(){
	int a[5][5],result[5];
	int i,j,max,min,c,d,e,p;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<5;i++){
		max=a[i][0];
		c=i;
		d=0;
		for(j=1;j<5;j++){
			if(a[i][j]>max){
				max=a[i][j];
				c=i;
				d=j;
			}
		}
		min=a[0][d];
		e=0;
		for(p=1;p<5;p++){
			if(a[p][d]<min){
				min=a[p][d];
				e=p;
			}
		}
		if(e==c){
			printf("%d %d %d\n",c+1,d+1,a[c][d]);
		}
		else result[i]=0;
	}
	if((result[0]==0)&&(result[1]==0)&&(result[2]==0)&&(result[3]==0)&&(result[4]==0)){
		printf("not found");
	}
	return 0;
}
