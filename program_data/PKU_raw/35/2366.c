
int h,l;
int a[10][10];

int find1(int p,int q){
	int i;
	int max=a[p][q];
	for(i=0;i<l;i++){
		if(a[p][i]>max){
			return 1;
		}
	}
	return 2;
}

int find2(int p,int q){
	int j;
	int min=a[p][q];
	for(j=0;j<h;j++){
		if(a[j][q]<min){
			return 3;
		}
	}
	return 2;
}

int main(){
	int i,j;
	scanf("%d,%d",&h,&l);
	for(i=0;i<h;i++){
		for(j=0;j<l;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<h;i++){
		for(j=0;j<l;j++){
			if(find1(i,j)==find2(i,j)){
				printf("%d+%d",i,j);
				return 0;
			}
		}
	}
	printf("No");
	return 0;
}