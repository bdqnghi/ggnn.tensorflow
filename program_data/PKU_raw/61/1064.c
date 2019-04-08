
int main() {
	int n=0;
	int a[21];
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>a[i];
		if (a[i]==1)                  //?????1
			cout<<1<<endl;
		if (a[i]==2)	              //?????1
			cout<<1<<endl;
		if (a[i]>=3){		      //??????????
			int a1=1,a2=1,a3=0;
		  for (int j=3;j<=a[i];j++){
			a3=a1+a2;
			 a1=a2;
			 a2=a3;}	      //????????2????? 

		cout<<a3<<endl;} 
	}

	return 0;
}
