/*
 * ????????.cpp
 *
 *  Created on: 2012-12-27
 *      Author: i
 */
int a[103][103]={0},n=0,m=0;
void shuchu(int hang,int lie){
	int i=0;
	if((n%2==0&&hang>=n/2)||(m%2==0&&lie>=m/2)){}
	else if(m%2==1&&lie==m/2)for(i=hang;i<n-hang;i++)cout<<a[i][lie]<<endl;
	else if(n%2==1&&hang==n/2)for(i=lie;i<m-lie;i++)cout<<a[hang][i]<<endl;
	else{
		for(i=lie;i<m-lie;i++)cout<<a[hang][i]<<endl;
		for(i=hang+1;i<n-hang;i++)cout<<a[i][m-lie-1]<<endl;
		for(i=m-lie-2;i>=lie;i--)cout<<a[n-hang-1][i]<<endl;
		for(i=n-hang-2;i>=hang+1;i--)cout<<a[i][lie]<<endl;
		shuchu(hang+1,lie+1);
	}
}
int main(){
	int i=0,j=0;
	cin>>n>>m;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	shuchu(0,0);
	return 0;
}
