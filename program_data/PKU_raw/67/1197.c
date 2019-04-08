int main(){
	int n;
	cin>>n;
	float a[n],b[n],x[n],s;
	cin>>a[0]>>b[0];
	x[0]=b[0]/a[0];
	for(int i=1;i<n;i++){
		cin>>a[i]>>b[i];
		x[i]=b[i]/a[i];
		s=x[i]-x[0];
		if(s>0.05) cout<<"better"<<endl;
		else if(s<-0.05) cout<<"worse"<<endl;
		else cout<<"same"<<endl;
	}
	return 0;
}