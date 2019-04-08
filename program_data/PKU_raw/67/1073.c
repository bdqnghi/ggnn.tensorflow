int main()
{
double total[100];
double good[100];
double pre[100];
int n,i;
cin>>n;
for(i=0;i<=n-1;i++){
	cin>>total[i];
	cin>>good[i];
	pre[i]=good[i]/total[i];
}
for(i=1;i<=n-1
	;i++){
	if(pre[i]-pre[0]>=0.0500000){
		cout<<"better"<<endl;
	}

	if(pre[0]-pre[i]>0.0500000) {
		cout<<"worse"<<endl;
	}
	if((pre[i]-pre[0]<0.0500000&&pre[i]-pre[0]>=0)||(pre[0]-pre[i]<=0.05000000&&pre[0]-pre[i]>=0)){
		cout<<"same"<<endl;
	}

	cout<<endl;
}

return 0;
}