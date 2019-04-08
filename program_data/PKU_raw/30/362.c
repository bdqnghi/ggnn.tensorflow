int main(){
	int n;
	cin>>n;
	int i,j;
	int a[101];
	double t=0;
	for(i=1;i<=n;i++)
		a[i]=i;
	for(j=1;j<=n;j++)
		if(j%7!=0&&(j-7)%10!=0&&!((j-70)<10&&(j-70)>0)){
			t=t+pow(a[j],2.0);
		}
	cout<<t<<endl;
	return 0;
}