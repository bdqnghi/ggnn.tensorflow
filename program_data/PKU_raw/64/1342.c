int main(){
	int i,j,l,k=0,n;
	cin >> n;
	double x[11],y[11],z[11],dis[11][11],temp[50],ins;
	for(i=0;i<n;i++)
		cin >> x[i] >> y[i] >> z[i];
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			dis[i][j]=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]);  //?i???j????????
			temp[k]=dis[i][j];  //??????????
			k++;
		}
	}
	for(i=0;i<k;i++){   //?????????
		for(j=0;j<k-i-1;j++){
			if(temp[j]>temp[j+1]){
				ins=temp[j+1];
				temp[j+1]=temp[j];
				temp[j]=ins;
			}
		}
	}
	for(l=k-1;l>=0;l--){  //????
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				if(dis[i][j]==temp[l]) {  //????????????????
					cout << fixed << setprecision(0)<<'(' << x[i]<<','<<y[i]<<','<<z[i]<<")-("<<x[j]<<','<<y[j]<<','<<z[j]<<")="<<fixed << setprecision(2)<<sqrt(temp[l])<<endl;
					//??????
					dis[i][j]=-1; //??????????????????-1?????temp[]??
				}

			}
		}
	}
	return 0;


}
