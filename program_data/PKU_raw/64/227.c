/*
 * 4.cpp
 *
 *  Created on: 2011-1-1
 *      Author: Administrator
 */

double f(int x1,int y1,int z1,int x2,int y2,int z2){
	double d2=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)+(z1-z2)*(z1-z2);
	return sqrt(d2);
}//?????
int main(){
	int x[10],y[10],z[10];//??????
	double d[10][10];//????
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>x[i]>>y[i]>>z[i];
	for(int i=0;i<n;i++)
		for(int j=0;j<i;j++){
			d[i][j]=f(x[i],y[i],z[i],x[j],y[j],z[j]);
		}//??????

	for(int k=0;k<n*(n-1)/2;k++ ){
		int a=0,b=0;
		double D=0;
		for(int i=0;i<n;i++)
			for(int j=0;j<i;j++){
				if(d[i][j]>D){
					D=d[i][j];
					a=i;
					b=j;
				}
			}//????????????
		cout<<"("<<x[b]<<","<<y[b]<<","<<z[b]<<")-("<<x[a]<<","<<y[a]<<","<<z[a]<<")=";
		cout<<fixed<<setprecision(2)<<D<<endl;//??
		d[a][b]=-1;//?????????????
	}
	return 0;
}
