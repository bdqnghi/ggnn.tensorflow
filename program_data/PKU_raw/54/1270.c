/*
 * 81.cpp
 *
 *  Created on: 2012-11-23
 *      Author: 99013
 */


int main() {
	int i,j, n, k;
	cin >> n >> k;
	float min = n + k;
	float temp;
	int suc=1;
	for(i=1;;i++){
		min=i*n+k;
		for(j=1;j<n;j++){
			temp=1-(float)1/n;
			suc=1;
			if((int)min%(n-1)==0){
				min=min/temp+k;
			}
			else if((int)min%(n-1)!=0){
				suc=0;
				j=n;
			}
		}
		if(suc==1){
		break;
		}
	}
cout<<(int)min;


	return 0;
}