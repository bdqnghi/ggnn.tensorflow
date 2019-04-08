
int num[100][100];     //float:??????????????
int row,col,i,j;
void output(int,int,int,int); 
int main(){
	cin>>row>>col;
	for(i = 0;i < row;i++)
		for(j = 0;j < col;j++)
			cin>>num[i][j];
	output(0,0,row,col);
	return 0;
}

void output(int x,int y,int a,int b){  //???x?y?????a?b????
	int i;
	if(a == 1){
		for(i = x;i < x+b;i++)
			printf("%d\n",num[x][i]);
	}
	else if(a == 2){
		for(i = x;i < x+b;i++)
			printf("%d\n",num[x][i]);
		for(i = x + b - 1;i >= x;i--)
			printf("%d\n",num[x+1][i]);
	}
	else if(b == 1){
		for(i = y;i < y+a;i++)
			printf("%d\n",num[i][y]);
	}
	else if(b == 2){
		printf("%d\n",num[x][y]);
		for(i = y;i < y+a;i++)
			printf("%d\n",num[i][y+1]);
		for(i = y + a - 1;i > y;i--)
			printf("%d\n",num[i][y]);
	}
	else{
		for(i = x;i < x + b;i++)printf("%d\n",num[x][i]);
		for(i = y + 1;i < y + a;i++)printf("%d\n",num[i][x+b-1]);
		for(i = x + b - 2;i >= x;i--)printf("%d\n",num[y+a-1][i]);
		for(i = y + a - 2;i > y;i--)printf("%d\n",num[i][y]);
		output(x+1,y+1,a - 2,b - 2);
	}
}