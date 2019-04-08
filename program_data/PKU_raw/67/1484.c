int main()
{
	int N,i;
	cin>>N;
	const int n=N;
	float a[n],b[n],q,p;
	for(i=0;i<=N-1;i=i+1){
		cin>>a[i]>>b[i];
	}
	q=(b[0]/a[0]);
	for(i=1;i<=N-1;i=i+1){
		p=(b[i]/a[i]);
		if(p-q>0.05){cout<<"better"<<endl;}
		else if(q-p>0.05){cout<<"worse"<<endl;}
		else{cout<<"same"<<endl;}
	}
	return 0;


}