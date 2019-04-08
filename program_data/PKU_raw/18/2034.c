
int num[100][100];
int n;

void modify(){
	for(int i=0;i<n;i++){
		int min = num[i][0];
		for(int j=1;j<n;j++){
			if(num[i][j]<min) min = num[i][j];
		}
		for(int j=0;j<n;j++){
			num[i][j]-=min;
		}
	}
	for(int j=0;j<n;j++){
		int min = num[0][j];
		for(int i=1;i<n;i++){
			if(num[i][j]<min) min = num[i][j];
		}
		for(int i=0;i<n;i++){
			num[i][j]-=min;
		}
	}
}

void remove(){
	for(int i=1;i<n-1;i++){
		for(int j=0;j<n;j++){
			num[i][j] = num[i+1][j];
		}
	}
	for(int j=1;j<n-1;j++){
		for(int i=0;i<n;i++){
			num[i][j] = num[i][j+1];
		}
	}
}

int main(){
	int N;
	cin>>N;
	int round = N;
	while(round--){
		n = N;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>num[i][j];
			}
		}
		int sum = 0;
		while(n>1){
			modify();
			sum += num[1][1];
			remove();
			n--;
		}
		cout<<sum<<endl;
	}
	return 0;
}
