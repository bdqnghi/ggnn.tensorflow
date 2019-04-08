int main(){
	int N,number=0;
	cin>>N;
	const int n=N;
	char a[n][50];
	for(int i=0;i<=n-1;++i)
		cin>>*(a+i);
	for(int i=0;i<=n-1;++i){
		if(number+strlen(*(a+i))<=80){
			if(i==0) cout<<*(a+i);
			if(i!=0) cout<<' '<<*(a+i);
			number+=1+strlen(*(a+i));
		}
		else {
			number=0;
			cout<<endl;
			cout<<*(a+i);
			number+=1+strlen(*(a+i));
		}
	}
	return 0;
}