/*
 * 1000012809-38.cpp
 *
 *  Created on: 2010-11-17
 *      Author: dell
 */
int main(){
	int i,s=0,j,a[5][5];
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			cin>>a[i][j];
		}
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(((((a[i][j]-a[i][0])>0)+((a[i][j]-a[i][1])>0)+
					((a[i][j]-a[i][2])>0)+((a[i][j]-a[i][3])>0)+
					((a[i][j]-a[i][4])>0))==4)&&(((a[i][j]-a[0][j])<0)+((a[i][j]-a[1][j])<0)+
					((a[i][j]-a[2][j])<0)+((a[i][j]-a[3][j])<0)+((a[i][j]-a[4][j])<0)==4))  {
				cout<<i+1<<" "<<j+1<<" "<<a[i][j];
				s=1;
			}
		}
	}
	if(s==0)
		cout<<"not found";
	return 0;
}
