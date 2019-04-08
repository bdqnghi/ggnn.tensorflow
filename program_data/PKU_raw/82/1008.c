/*
 * NormalBloodPressure.cpp
 *
 *  Created on: 2012-10-16
 *      Author: Cui Zhaoxiong Class4 1200012931
 */
int main(){
	int n=0,m=0;
	int sys[100],dias[100],c[100];
	cin >>n;
	for(int i=0;i<n;i++){
		cin >>sys[i] >>dias[i];
	}
	for (int i=0;i<n;i++){
		c[i]=0;
	}
	for(int i=0;i<n;i++){
		if(90<=sys[i]&&sys[i]<=140&&60<=dias[i]&&dias[i]<=90){	//????????????
			m+=1;
			c[i]=m;
		}
		else {
			c[i]=0;
			m=0;
		}
	}
	m=c[0];
	for (int i=1;i<n;i++){									//?????????
		if (m<c[i]) m=c[i];
	}
	cout <<m;
	return 0;
}
