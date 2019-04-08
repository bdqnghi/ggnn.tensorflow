int a[5][5],x[5],y[5];
int main(){
	int xx,yy,tmp;
	for(int i = 0;i < 5;i ++)
		for(int j = 0;j < 5;j ++)
			cin >> a[i][j];
	for(int i = 0;i < 5;i ++){
		tmp = a[i][0];
		x[i] = 0;
		for(int j = 1;j < 5;j ++){
			if(a[i][j] > a[i][x[i]])
				x[i] = j;
		}
	}
	for(int j = 0;j < 5;j ++){
		tmp = a[0][j];
		y[j] = 0;
		for(int i = 1;i < 5;i ++){
			if(a[i][j] < a[y[j]][j])
				y[j] = i;
		}
	}
	for(int i = 0;i < 5;i ++){
		if(i == y[x[i]]){
			printf("%d %d %d\n",i+1,x[i]+1,a[i][x[i]]);
			return 0;
		}
	}
	printf("not found\n");
	return 0;
}
