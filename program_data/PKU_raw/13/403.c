/*
 * 1000012889_26.cpp
 *
 *  Created on: 2010-10-31
 *      Author: ???
 *        ????????????
 */



int main(){
	int m,i,j;
	cin>>m;
	int a[m];                         //????
	for(i=0;i<m;i++){
		cin>>a[i];                    //???
		for(j=0;j<i;j++)              //??????????????
			if(a[j]==a[i])
				break;
		if(j==i){
			if(j==0)
				cout<<a[i];
			else cout<<" "<<a[i];
		}

	}
	return 0;
}
