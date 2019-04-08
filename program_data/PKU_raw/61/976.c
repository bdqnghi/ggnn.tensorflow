
int main() {
	int zu;
	cin >> zu;
	for(int i=1;i<=zu;i++){
		int j;cin>>j;
		switch (j){
		case 1: cout << 1 << endl;break;
		case 2: cout << 1 << endl;break;
		default:{int x1=1,x2=1;
			for(int k=3;k<=j;k++){
				x2=x1+x2;x1=x2-x1;
		}
			cout << x2 << endl;
		}
	}
	}
	return 0;
}
