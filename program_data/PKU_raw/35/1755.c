int main(){
	int row, col, c, d, e, f, g;
	int array[8][8], a[8], b[8];
	scanf("%d,%d", &row, &col);
	for(c=0; c<row; c++){
		for(d=0; d<col; d++){
			scanf("%d", &(array[c][d]));
		}
	}
	for(c=0; c<row; c++){
		a[c]=0;
		for(d=0; d<col; d++){
			if(array[c][d]>a[c]) a[c]=array[c][d];
		}
	}
	for(d=0; d<col; d++){
		b[d]=100000;
		for(c=0; c<row; c++){
			if(array[c][d]<b[d]) b[d]=array[c][d];
		}
	}
	for(e=0; e<row; e++){
		for(f=0; f<col; f++){
			if(a[e]==b[f]){
				g=0;
				printf("%d+%d", e, f);
			}
		}
	}
	if(g) printf("No");
	return 0;
}