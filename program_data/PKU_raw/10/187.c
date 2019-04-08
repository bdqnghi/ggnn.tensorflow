int main(){
	int k;
	int temp=0;
	int max=1;
	int z=0;
	cin>>k;
	int a[30];
	int b[30]={0};
	for (int i=0;i<k;i++){
		cin>>a[i];
	}
	b[0]=1;
	for (int i=1;i<k;i++){
		for(int j=0;j<i;j++){
			if(a[j]>=a[i]){
				temp=b[j]+1;
				if(max<temp){
					max=temp;
				}
			}
		}
		b[i]=max;
		if(max>z){
			z=max;
		}
		max=1;
	}
	cout<<z;
	return 0;
}
