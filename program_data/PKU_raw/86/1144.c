/*
 * tsyx.cpp
 *
 *  Created on: 2010-12-29
 *      Author: dell
 */
int main(){
	int i,n,s=0,j;
	cin>>n;
	int cishu[n],time[n],shijian[n];
	for(i=0;i<n;i++){
		time[i]=0;
		shijian[i]=0;
		cin>>cishu[i];
		if(cishu[i]==0) {cout<<60<<endl; continue;}
		int cxia[cishu[i]];
		for(j=0;j<cishu[i];j++)
			cin>>cxia[j];
		if((cishu[i]*3+cxia[j-1])<=60){
			time[i]=60-cishu[i]*3;
		}
		else {
			s=0;
			for(time[i]=0;time[i]<60;){
				if(time[i]==cxia[s]) {shijian[i]=shijian[i]+3;s++;}
				else{
					shijian[i]++;
					time[i]++;
				}
				if(shijian[i]>=60) break;
			}
		}
		cout<<time[i]<<endl;
	}
	return 0;
}