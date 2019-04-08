/*
 * pl.cpp
 *
 *  Created on: 2013-11-2
 *      Author: lenovo
 */

const int maxN=105;
int x[maxN],y[maxN],z[maxN],dis[maxN][maxN],d[maxN*maxN]={0};
int n;
int calc(int a,int b)
{
	return (x[a]-x[b])*(x[a]-x[b])+(y[a]-y[b])*((y[a]-y[b]))+(z[a]-z[b])*(z[a]-z[b]);
}
int main()
{
	int i,j;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>x[i]>>y[i]>>z[i];
		dis[i][i]=0;
		for(j=1;j<i;j++){
			dis[i][j]=dis[j][i]=calc(i,j);
			d[++d[0]]=dis[i][j];
		}
	}
	sort(d+1,d+d[0]+1);
	d[d[0]+1]=-1;
	for(int k=d[0];k;k--)
		if(d[k]!=d[k+1]){
			for(i=1;i<n;i++)
			    for(j=i+1;j<=n;j++)
			    	if(dis[i][j]==d[k])
			    	   printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",x[i],y[i],z[i],x[j],y[j],z[j],sqrt(dis[i][j]));
		}
	return 0;
}
