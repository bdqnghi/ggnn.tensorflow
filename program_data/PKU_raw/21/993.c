int main(){
	int n,a[305]={0},sum=0,b[305]={0},max=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum=sum+a[i];
		a[i]=a[i]*n;
		}
			for(int i=0;i<n-1;i++){
				for(int j=0;j<n-1-i;j++){
					if(a[j]>a[j+1]){
						int temp=a[j];
						a[j]=a[j+1];
						a[j+1]=temp;
						}
					}
				}
				for(int i=0;i<n;i++){
			        b[i]=abs(a[i]-sum);
			        if(b[i]>max)max=b[i];
			        }
			        int check=0;
			        for(int i=0;i<n;i++){
						if(b[i]==max){
							if(check==0)
							cout<<a[i]/n;
							else cout<<","<<a[i]/n;
							check=1;
							}
						}
						return 0;
	}