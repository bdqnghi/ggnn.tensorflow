int main(){
	int e;
	cin>>e;
	int a = 3,b;
	while(a <= e/2){
	
	int t = 3;
	while(t < a){
		int m = a%t;
		if(m == 0)break;
		t+=2;
	}
	int q = 3;
	while(q < e - a){
		int n = (e-a)%q;
		if(n == 0)break;
		q+=2;
	}
	if(t == a && q == e-a)
		cout<<a<<" "<<e-a<<endl;
	a += 2;
	}
	return 0;
}
