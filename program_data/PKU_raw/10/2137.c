
int main(){
	int n;
	cin>>n;
	int num[30];
	int len[30];
	for(int i=0;i<n;++i){
		cin>>num[i];
	}
	len[0]=1;
	for(int i=1;i<n;++i){
		int max=0;
		for(int j=0;j<i;++j){
			if(num[j]>=num[i] && len[j]>max){
				max=len[j];
			}
			if(max==0)
				len[i]=1;
			else
				len[i]=max+1;
		}
	}
	int l=len[0];
	for(int i=1;i<n;++i){
		if(len[i]>l)
			l=len[i];
	}
	cout<<l<<endl;
}