int main(){
	int n,k=0;
	cin>>n;
	float a[n],ar,sum=0,max=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	ar=sum/n;
	for(int i=0;i<n;i++)
		if(abs(a[i]-ar)>=max)max=abs(a[i]-ar);
	for(int i=0;i<n;i++)
		if((abs(a[i]-ar)==max)&&k==0){cout<<a[i];
		k++;
		}
		else if((abs(a[i]-ar)==max)&&k!=0){cout<<','<<a[i];
		k++;
		}
	return 0;
}