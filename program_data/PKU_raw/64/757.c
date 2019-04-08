/*
 * ds.cpp
 *
 *  Created on: 2011-12-9
 *      Author: admin
 */
struct place{
	int x;
	int y;
	int z;
};
struct distance{
	int i1;
	int i2;
	double dis;
};
int main(){
	int i,j,k,n;
	struct place a[11];
	struct distance d[100],temp;
	cin>>n;
	for (i=1;i<=n;i++){
		cin>>a[i].x>>a[i].y>>a[i].z;
	}
	k=1;
	for (i=1;i<=n-1;i++){
		for (j=i+1;j<=n;j++){
			d[k].i1=i;
			d[k].i2=j;
			d[k].dis=sqrt((a[i].x-a[j].x)*(a[i].x-a[j].x)+
					(a[i].y-a[j].y)*(a[i].y-a[j].y)+
					(a[i].z-a[j].z)*(a[i].z-a[j].z));
			k++;
		}
	}
	for (i=k-1;i>=1;i--){
		for (j=1;j<=i-1;j++){
			if (d[j].dis<d[j+1].dis){
				temp=d[j];
				d[j]=d[j+1];
				d[j+1]=temp;
			}
		}
	}
	for (i=1;i<=k-1;i++){
		cout<<'('<<a[d[i].i1].x<<','<<a[d[i].i1].y<<','<<a[d[i].i1].z<<')'<<'-'<<
				'('<<a[d[i].i2].x<<','<<a[d[i].i2].y<<','<<a[d[i].i2].z<<')'<<'='<<
				fixed<<setprecision(2)<<d[i].dis;
		if (i!=k-1)cout<<endl;
	}
return 0;
}
