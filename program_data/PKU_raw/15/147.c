int main(){
	int tumor[100][100];
	int n,i,j,a,b,sum;
	a=0;b=0;
	cin>>n;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin>>tumor[i][j];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){

			if(tumor[i][j]==0)
				a++;
		}
			if(a!=0)
				break;
			else if(a==0)
				continue;
	}
	for(j=0;j<n;j++){
		for(i=0;i<n;i++){
			if(tumor[i][j]==0)
				b++;
		}
		if(b!=0)
			break;
		else  continue;
	}
	sum=(a-2)*(b-2);
	cout<<sum<<endl;
	return 0;
}

