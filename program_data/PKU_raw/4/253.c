int main(){
	int row, col, sz[100][100], i, j, a, b;	
	scanf("%d%d", &row, &col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d", &sz[i][j]);
		}
	}
	for(i=0;i<col;i++){
		a=i;
		b=0;
		for(j=0;j<=i;j++){
			printf("%d\n", sz[b][a]);
			b++;
			a--;
			if(b==row)
				break;
		}
	}
	for(i=1;i<row;i++){
		b=i;
		a=col-1;
		for(j=i;j<row;j++){
			printf("%d\n", sz[b][a]);
			b++;
			a--;
			if(a==-1)
			     break;
		}
		
	}
	return 0;
}