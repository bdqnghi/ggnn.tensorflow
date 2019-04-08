int main(){
	int n;
	cin>>n;
	int rela1[100000],rela2[100000];
	int i=0,p,I;
	while(1){
		cin>>rela1[i]>>rela2[i++];
		if(rela1[i-1]==0&&rela2[i-1]==0){
			I=i;
			break;
		}}
		int num[n];
		for(p=0;p<n;p++){
			num[p]=0;
			for(int k=0;k<I-1;k++)
				if(rela2[k]==p)num[p]++;
			if(num[p]>=n-1){
				cout<<p<<endl;
				break;
			}
		}
		if(p==n)cout<<"NOT FOUND"<<endl;
	return 0;
}