int is_leapyear(int y);
int main(){
	int n;
	cin>>n;
	const int md[12]={
		31,28,31,30,31,30,31,31,30,31,30,31
	};
	for(int i=0;i<n;i++){
		int yy,m1,m2;
		cin>>yy>>m1>>m2;
		int d=0;
		for(int i=min(m1,m2);i<max(m1,m2);i++) d+=md[i-1];
		if((m1<=2||m2<=2)&&is_leapyear(yy)) d++;
		if(!(d%7)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
int is_leapyear(int y){
	if(!(y%100)){
		if(!(y%400)) return 1;
		else return 0;
	}
	else if(!(y%4)) return 1;
	else return 0;
}