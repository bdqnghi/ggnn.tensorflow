

int main(){
	int n;
	double e,all;
	int i;
	double xiaoguo;
	cin>>n;
	double E[n+2];
	for(i=1;i<=n;i++){
		cin>>all>>e;
		xiaoguo=e/all;
		E[i]=xiaoguo;
	}
	for(i=2;i<=n;i++){
		if((E[i]-E[1])>0.05){
			cout<<"better"<<endl;
		}
		else if((E[i]-E[1])<-0.05){
			cout<<"worse"<<endl;
		}
		else{
			cout<<"same"<<endl;
		}
	}

}
