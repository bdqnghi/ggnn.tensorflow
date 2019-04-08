/*
 * 4.cpp
 *
 *  Created on: 2011-11-4
 *      Author: 11294
 */
int main(){
	//??????
	int a[5][5];
	int b[5][5];
	int c[5][5];
	int i,j,w;
	//????
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			cin>>a[i][j];
			b[i][j]=a[i][j];
			c[i][j]=a[i][j];
		}
	}
	//?b?c????????????????????
	for(i=0;i<5;i++){//??b[i][4]?????
		for(j=0;j<=3;j++){
			if(b[i][j]>b[i][j+1]){
				w=b[i][j];b[i][j]=b[i][j+1];b[i][j+1]=w;
			}
		}
	}
	for(j=0;j<5;j++){//??c[4][j]?????
		for(i=0;i<=3;i++){
			if(c[i][j]<c[i+1][j]){
				w=c[i][j];c[i][j]=c[i+1][j];c[i+1][j]=w;
			}
		}
	}
	//????,???????,????
	int p=0,x;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(a[i][j]==b[i][4]&&a[i][j]==c[4][j]){cout<<i+1<<" "<<j+1<<" "<<a[i][j];x=a[i][j];p++;break;}
		}
	}
	//??????,???????
	if(p==0)cout<<"not found"<<endl;
	return 0;
}//?????
