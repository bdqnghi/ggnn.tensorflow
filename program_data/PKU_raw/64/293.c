/*
 * structure_4.cpp
 *
 *  Created on: 2010-12-29
 *      Author: ???
 *        ??? ????
 */



int main(){
	int n,i,j,num;
	cin>>n;
	struct point{                     //??????
		int x;
		int y;
		int z;
	} p[100];
	for(i=0;i<n;i++)                  //????????
		cin>>p[i].x>>p[i].y>>p[i].z;
	struct distance{                  //??????????
		double dis;
		int i;
		int j;
	} d[5000],temp;
	for(i=0,num=0;i<n-1;i++)          //?????
		for(j=i+1;j<n;j++,num++){
			d[num].dis=sqrt(pow(p[i].x-p[j].x,2.0)+pow(p[i].y-p[j].y,2.0)+pow(p[i].z-p[j].z,2.0));
			d[num].i=i;
			d[num].j=j;
		}
	for(i=0;i<num-1;i++)              //?????
		for(j=0;j<num-i-1;j++){
			if(d[j].dis<d[j+1].dis){
				temp=d[j];
				d[j]=d[j+1];
				d[j+1]=temp;
			}
		}
	for(i=0;i<num;i++)                //????
		cout<<'('<<p[d[i].i].x<<','<<p[d[i].i].y<<','<<p[d[i].i].z<<")-("<<p[d[i].j].x<<','<<p[d[i].j].y<<','<<p[d[i].j].z<<")="<<fixed<<setprecision(2)<<d[i].dis<<endl;
	return 0;
}
