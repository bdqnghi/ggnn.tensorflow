int runnian(int nian){
	if(nian%100==0){
		if(nian%400==0){
			return 1;
		}
		else return 0;
	}
	else {
		if(nian%4==0){
			return 1;
		}
		else return 0;
	}
}
int main(){
	int n;
	int s1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int s2[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	cin>>n;
	for(int i=0;i<n;i++){
		int nian,yue1,yue2,days=0;
		cin>>nian>>yue1>>yue2;
		if(yue1>yue2){
			int temp;
			temp=yue1;
			yue1=yue2;
			yue2=temp;
		}
		if(runnian(nian)==0){
			for(int j=yue1-1;j<yue2-1;j++){
				days+=s1[j];
			}
			if(days%7==0){
				cout<<"YES"<<endl;
			}
			else cout<<"NO"<<endl;
		}
		else if(runnian(nian)==1){
			for(int j=yue1-1;j<yue2-1;j++){
							days+=s2[j];
						}
						if(days%7==0){
							cout<<"YES"<<endl;
						}
						else cout<<"NO"<<endl;
		}
		}
	return 0;
}

