int cell[15][15][2]={0};
const int dx[8]={1,0,-1,0,1,1,-1,-1};
const int dy[8]={0,1,0,-1,1,-1,1,-1};

int sur(int x,int y){
	if (x==1 && y==1 || x==1 && y==9 || x==9 && y==1 || x==9 && y==9)
		return cell[x][y][0]*8/3;
	else if (x==1 || y==1 || x==9 || y==9)
		return cell[x][y][0]*8/5;
	else return cell[x][y][0];
}

void fer (int day){
	for (int d=1;d<=day;d++){
		for (int i=1;i<=9;i++)
			for (int j=1;j<=9;j++){
				if (cell[i][j][0] != 0){
					cell[i][j][1] += cell[i][j][0];
					for (int k=0;k<8;k++){
						int x = i + dx[k], y = j + dy[k];
						if (x>=1 && x<=9 && y>=1 && y<=9)
							cell[x][y][1] += sur(i,j);
					}
				}
			}
		for (int i=1;i<=9;i++)
			for (int j=1;j<=9;j++)
				cell[i][j][0] = cell[i][j][1];
	}
}



void draw(){
	for (int i=1;i<=9;i++){
		for (int j=1;j<=8;j++)
			cout<<cell[i][j][0]<<" ";
		cout<<cell[i][9][0]<<endl;
	}
}

int main ()
{
	int num,day;
	cin>>num>>day;
	cell[5][5][0] = num;
	cell[5][5][1] = num;
	fer(day);
	draw();
	return 0;
}