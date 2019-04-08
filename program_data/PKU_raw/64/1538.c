int main(){
	int a[10][3],dian[50][2],n,i,j,k=0,m;
	double d[50],temp;
	cin >> n;
	for(i=0;i<n;i++){
		cin >> a[i][0] >> a[i][1] >> a[i][2];}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			d[k]=sqrt((a[i][0]-a[j][0])*(a[i][0]-a[j][0])+(a[i][1]-a[j][1])*(a[i][1]-a[j][1])+(a[i][2]-a[j][2])*(a[i][2]-a[j][2]));
			dian[k][0]=i;
			dian[k][1]=j;
			k++;}
	}
	for(i=0;i<k-1;i++){
		for(j=0;j<k-i-1;j++){
			if(d[j]<d[j+1]){
				temp=d[j];
				d[j]=d[j+1];
				d[j+1]=temp;
				m=dian[j][0],dian[j][0]=dian[j+1][0],dian[j+1][0]=m;
				m=dian[j][1],dian[j][1]=dian[j+1][1],dian[j+1][1]=m;
			}
		}
	}
	for(i=0;i<k;i++){
		cout <<"("<<a[dian[i][0]][0]<<","<<a[dian[i][0]][1]<<","<<a[dian[i][0]][2]<<")"<<"-"<<"("<<a[dian[i][1]][0]<<","<<a[dian[i][1]][1]<<","<<a[dian[i][1]][2]<<")"<<"="<<fixed<<setprecision(2)<<d[i]<<endl;
	}
	return 0;
}
