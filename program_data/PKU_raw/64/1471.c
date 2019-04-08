/*
 * 3.cpp
 *
 *  Created on: 2012-11-3
 *      Author: AK
 */
int main(){
	double a[50][3];                              //???????????????????
	double distance;
	int x[10],y[10],z[10];                         //?????????
	int n,x1,y1,z1,i,j,k=0;                        //?????????
	cin>>n;
	for(i=0;i<n;i++){                             //????????
		cin>>x1>>y1>>z1;
		x[i]=x1;y[i]=y1;z[i]=z1;
	}
	for(i=0;i<=n-2;i++)                            //???????????????????????????
		for(j=i+1;j<=n-1;j++)
		{
			a[k][0]=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]));
			a[k][1]=i;a[k][2]=j;k++;
		}
	for(i=1;i<=k-1;i++)                             //??????????????????????????????????????
		for(j=k-1;j>=i;j--)
		{
			if(a[j][0]>a[j-1][0])
			{
				distance=a[j-1][0];a[j-1][0]=a[j][0];a[j][0]=distance;
				distance=a[j-1][1];a[j-1][1]=a[j][1];a[j][1]=distance;
				distance=a[j-1][2];a[j-1][2]=a[j][2];a[j][2]=distance;
			}
		}
	for(i=0;i<=k-1;i++)              //????      ????????????printf????
	{
		cout<<'('<<x[(int)(a[i][1])]<<','<<y[(int)(a[i][1])]<<','<<z[(int)(a[i][1])]<<")-(";
		cout<<x[(int)(a[i][2])]<<','<<y[(int)(a[i][2])]<<','<<z[(int)(a[i][2])]<<")=";
		cout<<fixed<<setprecision(2)<<a[i][0]<<endl;
	}
	return 0;

}