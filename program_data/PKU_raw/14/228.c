/*
 * 01.cpp
 *
 *  Created on: 2010-12-24
 *      Author: liuquan
 */
int main(){
	struct student{//????
		int number;
		int chinese;
		int math;
		int all;
	}stu[100000];
	int n,i,j,n1=1,n2=1,n3=1;
	cin>>n;
	for(i=1;i<=n;i++){//??
		cin>>stu[i].number>>stu[i].chinese>>stu[i].math;
		stu[i].all=stu[i].chinese+stu[i].math;
	}
	/*for(j=1;j<n;j++){//?????
		for(i=1;i<n-j;i++){
			if(stu[i].all<stu[i+1].all){
				t=stu[i].all;
				stu[i].all=stu[i+1].all;
				stu[i+1].all=t;
				t1=stu[i].number;
				stu[i].number=stu[i+1].number;
				stu[i+1].number=t1;
			}
		}
	}*/
	for(i=2;i<=n;i++){
		if(stu[n1].all<stu[i].all)
			n1=i;

	}
	for(i=2;i<=n;i++){
		if(i==n1)
          continue;
		if(stu[n2].all<stu[i].all)
			n2=i;
	}
	for(i=2;i<=n;i++){
		if(i==n2||i==n1)
           continue;
		if(stu[n3].all<stu[i].all)
			n3=i;
	}
		cout<<stu[n1].number<<" "<<stu[n1].all<<endl;//?????
		cout<<stu[n2].number<<" "<<stu[n2].all<<endl;
		cout<<stu[n3].number<<" "<<stu[n3].all<<endl;
	return 0;
}