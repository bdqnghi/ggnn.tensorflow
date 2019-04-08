int main(){                  //???
	int n;
	cin>>n;
	int a[n];                //??????
	for(int i=0;i<n;i++)        //????
		cin>>a[i];
	for(int i=0;i<n;i++)              //????
		for(int j=0;j<n-i-1;j++)
			if(a[j]>a[j+1]){
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
	for(int i=0;i<n;i++)             //????????
		if(a[i]%2==1&&i==0)cout<<a[i];
		else if(a[i]%2==1&&i!=0)cout<<','<<a[i];
	return 0;
}