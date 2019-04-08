



int main(){

	int a[1000][2];
	int n=0;
	int num=0;

	while(true){

		cin>>a[n][0];

		n++;

		if(cin.get()!=',') break;
	}

	for(int i=0;i<n;i++){
		cin>>a[i][1];
                cin.get();
	}

	for(int i=0;i<1000;i++){
		int tmp=0;
		for(int j=0;j<n;j++){
			if(i>=a[j][0]&&i<a[j][1]){
				tmp+=1;
			}
		}
		if(tmp>num){
			num=tmp;
		}
	}

	cout<<n<<' '<<num;
	

	return 0;


	
}