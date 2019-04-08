int main(){
	int n,i,t,p,j;
	int a[1000][30];
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i][0];
		for(j=1;j<a[i][0]*2;j=j+2)
			cin>>a[i][j];
		for(j=2;j<=a[i][0]*2;j=j+2)
			a[i][j]=3;
		for(j=j-3;j>=3;j=j-2)
			a[i][j]=a[i][j]-a[i][j-2];
		for(j=1,t=0;j<=a[i][0]*2;j++){
			t=t+a[i][j];
			if(t>60){
				if(j<=a[i][0]*2)
					j--;
				break;  //??????
                }
		}
		if((j%2==0&&t>60)||t<=60)
			cout<<60-(j/2)*3<<endl;
		else if(j%2==1&&t>60){
			for(p=1,t=0;p<j+1;p=p+2)
				t=a[i][p]+t;  //????
			cout<<t<<endl;
		}
	}
}