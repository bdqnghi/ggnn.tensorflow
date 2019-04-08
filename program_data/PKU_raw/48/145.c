
int a[9][9], b[9][9];
int start, days;

void initial(){//make a and b all 0
	int i, j;
	for(i= 0; i< 9; i++){
		for(j= 0; j< 9; j++){
			a[i][j]= 0;
			b[i][j]= 0;
		}
	}
}


void input(){//set the start germ number
	cin>>start>>days;
	a[4][4]= start;
}
void output(){//print a
	int i= 0, j= 0;
	for(i= 0; i< 9; i++){
		for(j= 0; j< 9; j++){
			if(j== 0)
				cout<<a[i][j];
			else
				cout<<' '<<a[i][j];
		}
		cout<<endl;
	}
}
void grow(int day){//germs grow one day
	if(day> days)
		return;
	int i= 0, j= 0;
	for(i= 0; i< 9; i++){
		for(j= 0; j< 9; j++){
			if(a[i][j]> 0){
				b[i][j]+= a[i][j];
				if((i- 1)>= 0 && (i- 1)<= 9)		b[i- 1][j]+= a[i][j];
				if((i+ 1)>= 0 && (i+ 1)<= 9)		b[i+ 1][j]+= a[i][j];
				if((j- 1)>= 0 && (j- 1)<= 9)		b[i][j- 1]+= a[i][j];
				if((j+ 1)>= 0 && (j+ 1)<= 9)		b[i][j+ 1]+= a[i][j];

				if((i- 1)>= 0 && (i- 1)<= 9 && (j- 1)>= 0 && (j- 1)<= 9)		b[i- 1][j- 1]+= a[i][j];
				if((i- 1)>= 0 && (i- 1)<= 9 && (j+ 1)>= 0 && (j+ 1)<= 9)		b[i- 1][j+ 1]+= a[i][j];
				if((i+ 1)>= 0 && (i+ 1)<= 9 && (j+ 1)>= 0 && (j+ 1)<= 9)		b[i+ 1][j+ 1]+= a[i][j];
				if((i+ 1)>= 0 && (i+ 1)<= 9 && (j- 1)>= 0 && (j- 1)<= 9)		b[i+ 1][j- 1]+= a[i][j];

			}
		}
	}
	for(i= 0; i< 9; i++){
		for(j= 0; j< 9; j++){
			a[i][j]+= b[i][j];
			b[i][j]= 0;
		}
	}
	grow(day+ 1);
}
int main(){
	initial();
	input();
	grow(1);
	output();
	return 0;
}
