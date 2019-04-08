/*
 * 4.cpp
 *
 *  Created on: 2011-1-9
 *      Author: jsgl
 */
int main(){
	int m,n;
	cin>>m>>n;
	const int mm=m+2,nn=n+2;
	int a[mm][nn],i,j;
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
			cin>>a[i][j];
	for(i=0;i<=m+1;i++){
		a[i][n+1]=0;
		a[i][0]=0;
	}
	for(j=0;j<=n+1;j++){
		a[0][j]=0;
		a[m+1][j]=0;
	}
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++){
			if(a[i][j]<a[i-1][j]||a[i][j]<a[i+1][j]||a[i][j]<a[i][j-1]||a[i][j]<a[i][j+1])
				continue;
			cout<<i-1<<' '<<j-1<<endl;
		}
	return 0;
}
