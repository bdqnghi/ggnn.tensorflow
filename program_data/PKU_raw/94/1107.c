/*
 *???wwm.cpp
 *???????
 *??: 2012-11-9
 *?????1200012825
 */

int main (){
	int n,a[500],b[500],k=0;//b????????????
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if (a[i]%2!=0){
			b[k]=a[i];//????
			k++;
		}
	}
	for(int i=0;i<k-1;i++){
		for(int j=0;j<k-1-i;j++){
			if (b[j]>b[j+1]){
				int temp =b[j];
				b[j]=b[j+1];
				b[j+1]=temp; //????
			}
		}
	}
	cout<<b[0];
	for(int i=1;i<k;i++){
		cout<<","<<b[i];//????
	}
	cout<<endl;
	return 0;
}
