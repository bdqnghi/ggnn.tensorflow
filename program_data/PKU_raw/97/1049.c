
int main(){
	int n;
	cin>>n;

	int a[6], b[6], i;

	b[0]= n;

	for(i= 0; i< 6; i++){
		if(i== 0){
			b[i+ 1]= b[i]% 100;
			a[i]= (b[i]- b[i+ 1])/ 100;
		}
		if(i== 1){
			b[i+ 1]= b[i]% 50;
			a[i]= (b[i]- b[i+ 1])/ 50;
		}
		if(i== 2){
			b[i+ 1]= b[i]% 20;
			a[i]= (b[i]- b[i+1])/ 20;
		}
		if(i== 3){
			b[i+ 1]= b[i]% 10;
			a[i]= (b[i]- b[i+1])/ 10;
		}
		if(i== 4){
			b[i+ 1]= b[i]% 5;
			a[i]= (b[i]- b[i+1])/ 5;
		}

	}

	for(i= 0; i<=4; i++){
		cout<<a[i]<<endl;
	}

	cout<<b[5]<<endl;

	return 0;

}