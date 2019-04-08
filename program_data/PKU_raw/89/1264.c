int a[10010][10010];
int main()
{
	int n,i,j,flag=0;
	cin>>n;
	cin>>i>>j;
	while(i>0||j>0){	
		a[i][j]=1;
		cin>>i>>j;
	}
	for(int i=0;i<n;i++){
		double s=0,t=0;
		for(int j=0;j<n;j++){
			s+=a[i][j];
			t+=a[j][i];
		}
		if(s==0&&t==n-1){
			cout<<i<<endl;
			flag=1;
			break;
		}
	}
	if(!flag)
		cout<<"NO FOUND"<<endl;
	return 0;
}