int main() {
	int n,i;
	double rate0,rate,sum,efe,a;
	cin>>n;
	cin>>sum>>efe;
	rate0=efe/sum;
	for(i=1;i<n;i++){
		cin>>sum>>efe;
		rate=efe/sum;
		a=rate0-rate;
		if(a>0.05){
			cout<<"worse"<<endl;
			continue;
		}
		if(a<-0.05){
			cout<<"better"<<endl;
			continue;
		}
		cout<<"same"<<endl;
	}
	return 0;
}
