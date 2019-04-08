/*
 * statistics of scores.cpp
 *
 *  Created on: 2011-12-11
 *      Author: Administrator
 */
struct stu
	{
		int Num;
		int scoreC;
		int scoreM;
		int all;
	};
	struct stu stu[100005];
void fsort(int first,int last)
{
	int chosen1,chosen2,p,q;
	if(first>=last){return;}
	chosen1=stu[first].all;
	chosen2=stu[first].Num;
	p=first;q=last;
    while(p<q)
    {
    	while((p<q)&&(stu[q].all>=chosen1)){q--;}
    	if(p<q){stu[p].all=stu[q].all;stu[p].Num=stu[q].Num;p++;}
    	while((p<q)&&(stu[p].all<chosen1)){p++;}
    	if(p<q){stu[q].all=stu[p].all;stu[q].Num=stu[p].Num;q--;}
    }
    stu[p].all=chosen1;stu[p].Num=chosen2;
    fsort(first,p-1);
    fsort(p+1,last);
}
int main()
{
	int m,i;//????
	cin>>m;
	for(i=1;i<=m;i++)//????
	{
		cin>>stu[i].Num>>stu[i].scoreC>>stu[i].scoreM;
		stu[i].all=stu[i].scoreC+stu[i].scoreM;
	}
	fsort(1,m);
	cout<<stu[m].Num<<" "<<stu[m].all<<endl;//?????
	cout<<stu[m-1].Num<<" "<<stu[m-1].all<<endl;
	cout<<stu[m-2].Num<<" "<<stu[m-2].all<<endl;
	return 0;
}

