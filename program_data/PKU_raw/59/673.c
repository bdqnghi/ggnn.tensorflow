
char flu[100][100] = {'\0'};   //flu?????????????
int n;                      //n?????
int main(){
	
	int flu_infection(void);  //??????????????,?????????????

	int i,j,m,ill = 0;     //ill?????
	cin>>n;
	for(i = 0;i < n;i++){
		for(j = 0;j < n;j++){
			cin>>flu[i][j];
			if(flu[i][j] == '@')ill++;
		}
	}
	cin>>m;
	for(i = 1;i < m;i++){    //??????
		ill = flu_infection();

		
	}
	cout<<ill<<endl;         //??????
	return 0;
}

int flu_infection(void){
	int count = 0,i,j,k,num = 0;
	int people[10000][2];  
	
	//?????????????????
	for(i = 0;i < n;i++){
		for(j = 0;j < n;j++){
			if(flu[i][j] == '@'){
				people[num][0] = i;
				people[num][1] = j;
				num++;
			}
		}
	}

	for(k = 0;k < num;k++){
		
		//????:??????
		i = people[k][0];
		j = people[k][1];
		if(i > 0 && flu[i - 1][j] == '.')
			flu[i - 1][j] = '@';
		if(i < n - 1 && flu[i + 1][j] == '.')
			flu[i + 1][j] = '@';
		if(j > 0 && flu[i][j - 1] == '.')
			flu[i][j - 1] = '@';
		if(j < n - 1 && flu[i][j + 1] == '.')
			flu[i][j + 1] = '@';
	}

	//????????
	for(i = 0;i < n;i++){
		for(j = 0;j < n;j++){
			if(flu[i][j] == '@')count++;
		}
	}
	return count;
}