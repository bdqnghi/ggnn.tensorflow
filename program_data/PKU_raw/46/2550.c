int main(){
	int row,col;
	cin>>row>>col;
	int a[105][105];
	memset(a,-1,sizeof(a));//???????
	int x=0,y=0,st=1;
	for(int i=0;i<row;i++)//??
		for(int j=0;j<col;j++)
			cin>>a[i][j];
	while(true){
		if(st==1){//?
			cout<<a[x][y]<<endl;
			a[x][y]=-1;
			y++;
			if(a[x][y]==-1){//??
				st=2;
				y--;
				x++;
				if(a[x][y]==-1)//??
					break;
			}
		}
		else if(st==2){//?
			cout<<a[x][y]<<endl;
			a[x][y]=-1;
			x++;
			if(a[x][y]==-1){
				st=3;
				x--;
				y--;
				if(a[x][y]==-1)
					break;
			}
		}
		else if(st==3){//?
			cout<<a[x][y]<<endl;
			a[x][y]=-1;
			y--;
			if(y<0){//??
				y=0;
				st=4;
				x--;
			}
			if(a[x][y]==-1){
				st=4;
				y++;
				x--;
				if(a[x][y]==-1)
					break;
			}
		}
		else if(st==4){//?
			cout<<a[x][y]<<endl;
			a[x][y]=-1;
			x--;
			if(a[x][y]==-1){
				st=1;
				x++;
				y++;
				if(a[x][y]==-1)
					break;
			}
		}
	}

	return 0;
}