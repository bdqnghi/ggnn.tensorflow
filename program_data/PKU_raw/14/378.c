/*
 * 1000012826_????????.cpp
 *
 *  Created on: 2010-12-24
 *      Author: Administrator
 */

struct Student{
	int num;
	int mscore;
	int cscore;
	int total;
}stu[100001];
int main(){
	int n,i,m=0,b[201][100]={0},a[201][100]={0},j=200,count=3,k=0,c[201]={0};
	cin>>n;
	for(i=0;i<n;i++){
		cin>>stu[i].num;
	    cin>>stu[i].mscore;
	    cin>>stu[i].cscore;
	    stu[i].total=stu[i].mscore+stu[i].cscore;
	    }
	do{
		b[stu[m].total][c[stu[m].total]]=stu[m].total;//??????? ,c?stu[m].total????????
		a[stu[m].total][c[stu[m].total]]=stu[m].num;//?????????
		if(c[stu[m].total]<4)c[stu[m].total]++;//???????
		m++;
	}while(m<n);
		for(j=200;j>=0;j--){
			for(k=0;k<100&&count>0;k++){
				if(b[j][k]!=0){
					cout<<a[j][k]<<" "<<b[j][k]<<endl;
					count--;}//??????
			}
		}
}