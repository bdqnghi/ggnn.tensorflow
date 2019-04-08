/*
 * a.cpp
 *
 *  Created on: 2010-11-13
 *      Author: Administrator
 */
int main(){
	int a[5][5],i,j,k,n,flag,m=1;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++){
			cin>>a[i][j];
		}
	for(i=0;i<5;i++)
		for(j=0;j<5;j++){
			flag=1;
			for(k=0;k<5;k++){
				if(a[i][j]>a[i][k]||k==j)
					continue;
				else{
					flag=0;break;
				}
			}
			if(flag){
				for(n=0;n<5;n++){
					if(a[i][j]>=a[n][j]&&n!=i){
						flag=0;break;
					}
				}
				if(flag) {cout<<i+1<<" "<<j+1<<" "<<a[i][j]<<endl;m=0;}
			}
		}
	if(m) cout<<"not found"<<endl;
	return 0;
}
