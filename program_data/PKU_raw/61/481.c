

int b[21];

void cal(){
    b[0] = 1;
	b[1] = 1;
	for(int i = 2 ;i <= 20;i++){
		b[i] = b[i - 1] + b[i - 2];
	}
}

int main(){
	int a,n;
	cal();
	cin>>n;
	while(n--){
		cin>>a;
		cout<<b[a -1]<<endl;
	}
	return 0;
}