/*
 * 245.cpp
 *
 *  Created on: 2011-12-22
 *      Author: think
 */
int main(){//???
	int n;
	cin>>n;
	float standard;
	float temp1,temp2;
	cin>>temp1>>temp2;
	standard=temp2/temp1;
	int i;
	float rate[n];
	memset(rate,0,sizeof(rate));
	for(i=1;i<n;i++){
		cin>>temp1>>temp2;
		rate[i]=temp2/temp1;//???????
	}
	for(i=1;i<n;i++){//?????
		if(rate[i]-standard>0.05)cout<<"better"<<endl;
		else if(rate[i]-standard<-0.05)cout<<"worse"<<endl;
		else cout<<"same"<<endl;
	}
	return 0;
}//?????
