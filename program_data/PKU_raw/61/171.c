int main(){
	int n,i,j,x=1,y=1,z;
	cin>>n;
	int a[n];

	memset(a,0,sizeof(a));

	for(i=0;i<=n-1;i++){
		cin>>a[i];
	}
	for(i=0;i<=n-1;i++){
		x=1;y=1;
		for(j=1;j<=a[i];j++){
			z=x+y;
			x=y;
			y=z;
		}

		cout<<y-x<<endl;
	}
	return 0;
	}
