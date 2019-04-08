int main(){
	int n;cin>>n;
	int num;
	if(5-n<0) num=5-n+7;
	else num=5-n;
	int month[12]={0,31,59,90,120,151,181,212,243,273,304,334};
	for(int i=0;i<12;i++){
		if((month[i]+12)%7==num) {cout<<i+1<<endl;}
	}

}