/*
 * tongjixueshengxinxi.cpp
 *
 *  Created on: 2011-12-18
 *      Author: 1100012857
 */
int main(void)
{
	struct student
	{
		char stunum[100];
		char stuname[20];
		char sex;
		int age;
		char score[20];
		char location[20];
		//struct student *next;
	}stu[990];
	int i;
	for(i=0;;i++)
	{
		cin>>stu[i].stunum;
		if(stu[i].stunum[0]=='e')
			break;
		cin>>stu[i].stuname>>stu[i].sex>>stu[i].age>>stu[i].score>>stu[i].location;

	}
	i--;
	int n=i;
	for(i=n;i>=0;i--)
	{
		cout<<stu[i].stunum<<' '<<stu[i].stuname<<' '<<stu[i].sex<<' '<<stu[i].age<<' '<<stu[i].score<<' '<<stu[i].location<<endl;
	}
	return 0;
}
