int main()
{
	int n,i,j,i1,j1,k;
	double x[11],y[11],z[11],r[10][11];//?i????j??????r[i][j],?i??????(x[i],y[i],z[i])
	cin>>n;//?n??
	for(i=1;i<=n;i++)
		cin>>x[i]>>y[i]>>z[i];//????
	for(i=1;i<n;i++){
		for(j=1;j<=n;j++)
			r[i][j]=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]));
	}//?????????
	double max=0;//?max?????????
	for(k=1;k<=100;k++){
	for(i=1;i<n;i++){
		for(j=i;j<=n;j++){
			if(r[i][j]>max){
				max=r[i][j];
				i1=i;j1=j;//????????????
			}
			}
		}
	if(max!=0){
			cout<<fixed<<setprecision(0)<<"("<<x[i1]<<","<<y[i1]<<","<<z[i1]<<")-("<<x[j1]<<","<<y[j1]<<","<<z[j1]<<")=";
			cout<<fixed<<setprecision(2)<<r[i1][j1]<<endl;
			r[i1][j1]=0;//???????
			max=0;}
	}
	return 0;
}