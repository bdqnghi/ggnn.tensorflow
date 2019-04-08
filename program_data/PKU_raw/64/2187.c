int main()
{
	float point[10][3],distant[45],t;
	int n,i,j,k=0,p,d[45][2];
	cin>>n;
	for(i=0;i<n;i++)
		for(j=0;j<3;j++)
			cin>>point[i][j];    //i???????j?????????
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++,k++){//distant????????????d??????????????
			distant[k]=sqrt(pow((point[i][0]-point[j][0]),2)+pow((point[i][1]-point[j][1]),2)+pow((point[i][2]-point[j][2]),2));
			d[k][0]=i;d[k][1]=j;}
	for(i=1;i<n*(n-1)/2;i++) //?????????distance????
		for(j=0;j<n*(n-1)/2-i;j++)
			if(distant[j]<distant[j+1]){
				t=distant[j];
				distant[j]=distant[j+1];
				distant[j+1]=t;
				p=d[j][0];
				d[j][0]=d[j+1][0];
				d[j+1][0]=p;
				p=d[j][1];
				d[j][1]=d[j+1][1];
				d[j+1][1]=p;}
	for(k=0;k<(n*(n-1)/2);k++)//????
		cout<<'('<<fixed<<setprecision(0)<<point[d[k][0]][0]<<','<<point[d[k][0]][1]<<','<<
		point[d[k][0]][2]<<')'<<'-'<<'('<<point[d[k][1]][0]<<','<<
		point[d[k][1]][1]<<','<<point[d[k][1]][2]<<')'<<'='<<fixed<<setprecision(2)<<distant[k]<<endl;
	return 0;
}