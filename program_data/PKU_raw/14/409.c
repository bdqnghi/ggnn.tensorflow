/*
 * jiegou1.cpp
 *
 *  Created on: 2010-12-24
 *      Author: l
 */

struct student {
	int No;
	int china;
	int math;
};//????student
int main(){
	int n;
	cin>>n;
	struct student st[n];//??n????????st?n???????
	int i;
	for(i=0;i<n;i++)
		cin>>st[i].No>>st[i].china>>st[i].math;

	int s;
	int a1=0,a2=0,a3=0,b1=0,b2=0,b3=0;//???????????????
	for(i=0;i<n;i++)
	{
		s=st[i].china+st[i].math;
	if(s>a1)
	{

		a3=a2;
		b3=b2;
		a2=a1;
		b2=b1;
		a1=s;
		b1=i;
		continue;//??????????????
	}

	if(s>a2)
		{
			
			a3=a2;
			b3=b2;
			a2=s;
						b2=i;
			continue;
			
		}//??????????????
	if(s>a3)
		{
			a3=s;
			b3=i;
			continue;
		}//?????????????
	}
	cout<<st[b1].No<<" "<<a1<<endl;
	cout<<st[b2].No<<" "<<a2<<endl;
	cout<<st[b3].No<<" "<<a3<<endl;//????
	return 0;
}
