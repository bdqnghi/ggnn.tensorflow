int main(){
	int a[5][5];
	int b[5];
	int c[5];
	int b1[5];
	int c1[5];
	int a1[5],a2[5];
	int i=0,j=0,k=0,p=0,m=0,n=0;
	int max,min;
	int count=0;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			cin>>a[i][j];
	for(i=0;i<5;i++){
		max=a[i][0];b[k]=i;c[k]=0;
		for(j=0;j<5;j++){
			if(a[i][j]>max){
				max=a[i][j];
				b[k]=i;c[k]=j;
			}
		}a1[k]=max;k++;max=0;}
	for(m=0;m<5;m++){
		min=a[0][m];b1[p]=0;c1[p]=m;
		for(n=0;n<5;n++){
			if(a[n][m]<min){
				min=a[n][m];
				b1[p]=n;c1[p]=m;
			}
		}a2[p]=min;p++;min=0;
	}
	for(i=0;i<5;i++)
		for(j=0;j<5;j++){
			if(a1[j]==a2[i]&&b[j]==b1[i]&&c[j]==c1[i]){
				cout<<b[j]+1<<' '<<c[j]+1<<' '<<a1[j]<<endl;
			}
			else {
				count++;
			}
		}
	if(count==25)
		cout<<"not found"<<endl;
	return 0;
}