int day0[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int day1[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
void judge(int i,int x,int y){
	if(x==y) cout<<"Data Error"<<endl;
	int ds=0;
	if(i==1){
		if(x<y){
			for(int j=x;j<y;j++)
				ds=ds+day1[j];
		}
		else{
			for(int j=y;j<x;j++)
				ds=ds+day1[j];
		}
		if(ds%7==0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	else{
		if(x<y){
			for(int j=x;j<y;j++)
				ds=ds+day0[j];
			}
		else{
			for(int j=y;j<x;j++)
				ds=ds+day0[j];
		}
		if(ds%7==0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
int main(){
	int n,year,month1,month2;
	cin>>n;
	while(n!=0){
		cin>>year>>month1>>month2;
		if((year%4==0&&year%100!=0)||year%400==0) judge(1,month1,month2);
		else judge(0,month1,month2);
		n--;
	}
	return 0;
}
