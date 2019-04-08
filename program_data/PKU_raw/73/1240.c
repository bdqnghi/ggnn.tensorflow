/*
 * 11.cpp
 *
 *  Created on: 2011-11-4
 *      Author: 11095
 */

int main()
{
	int jz[5][5];
	int i,j,I,J,p=0,max;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			cin>>jz[i][j];
		}
	}

	for(i=0;i<5;i++){
		max=jz[i][0];
		I=i;J=0;
		for(j=1;j<5;j++){
			if(max<jz[i][j]) {
				max=jz[i][j];
				I=i;J=j;
			}
		}
		if(max<=jz[0][J]&&max<=jz[1][J]&&max<=jz[2][J]&&max<=jz[3][J]&&max<=jz[4][J]){
			I=I+1;J=J+1;p=1;
			cout<<I<<" "<<J<<" "<<max;
		}
	}

	if(p==0)cout<<"not found"<<endl;
	return 0;
}
