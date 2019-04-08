/*
 * score.cpp
 *
 *  Created on: 2010-12-24
 *      Author: ???
 *      function: ????????
 */
int main()
{
	int stuNum,i;
	cin>>stuNum;
	struct student{
		int id,math,chinese,total;
	};//??????student
	struct student stu[stuNum],first,second,third;
	for(i=0;i<stuNum;i++){//???????????????
		cin>>stu[i].id>>stu[i].chinese>>stu[i].math;
		stu[i].total=stu[i].chinese+stu[i].math;
	}
	//????????????
	first=second=third=stu[0];
	for(i=1;i<stuNum;i++)
		if(stu[i].total>first.total) first=stu[i];
	cout<<first.id<<' '<<first.total<<endl;
	for(i=1;i<stuNum;i++)
		if(stu[i].total>second.total&&stu[i].id!=first.id) second=stu[i];
	cout<<second.id<<' '<<second.total<<endl;
	for(i=1;i<stuNum;i++)
		if(stu[i].total>third.total&&stu[i].id!=first.id&&stu[i].id!=second.id) third=stu[i];
	cout<<third.id<<' '<<third.total<<endl;
	return 0;
}
