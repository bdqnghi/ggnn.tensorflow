
int main()
{
	int n;
	cin>>n;
	float sum,effective;
	float percentji,percent;
	cin>>sum>>effective;
	percentji=effective/sum;
	while(--n){
		cin>>sum>>effective;
		percent=effective/sum;
		if(percentji-percent>0.05)cout<<"worse"<<endl;
		else if(percent-percentji>0.05)cout<<"better"<<endl;
		else cout<<"same"<<endl;
	}
	return 0;
}