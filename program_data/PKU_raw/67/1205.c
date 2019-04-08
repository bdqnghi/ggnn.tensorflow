/*
 * ?????????
 *  ????: 2010-12-19
 *    ??????
 */
int main(){
	int n;
	cin>>n;
	float a[100][2];
	for(int i=0;i<n;i++)
		for(int j=0;j<2;j++)
			cin>>a[i][j];//????
	float b[100];
	for(int i=0;i<n;i++)
		b[i]=a[i][1]/a[i][0];
	for(int i=1;i<n;i++){
		if(b[i]>b[0]){//???
			if((b[i]-b[0])>0.05)
				cout<<"better"<<endl;
			else cout<<"same"<<endl;//????
		}
		else{
			if((b[0]-b[i])>0.05)
				cout<<"worse"<<endl;
				else cout<<"same"<<endl;
		}
	}
	return 0;
}
