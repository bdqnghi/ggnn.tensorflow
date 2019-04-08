int main(){
	int n,a[20001],i,j;
	cin >> n;
	for(i=0;i<n;i++){    //??????
		cin >> a[i];
	}
	for(i=0;i<n;i++){
		if(a[i]==0) continue;
		for(j=i+1;j<n;j++){
			if( a[i]==a[j]) a[j]=0;      //????????0
		}
	}
	int temp[20001],k=0;
	for(i=0;i<n;i++){
		if(a[i]!=0){
			temp[k]=a[i];         //?temp??????????????
			k++;
		}
	}
	for(i=0;i<k-1;i++) cout << temp[i] << ' ';   //?????????
	cout << temp[k-1]<< endl;
	return 0;
}
