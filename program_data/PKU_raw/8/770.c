/*
 * T7.cpp
 *
 *  Created on: 2012-11-19
 *      Author:weiwan
 *      Function:????????????
 */

int a[10000],b[10000];
int A,B;
void read()          //????????
{
	int i;
	cin >>A >>B;
	for (i = 0;i < A;i ++)
		cin >>a[i];
	for (i = 0;i < B;i ++)
		cin >>b[i];
}
void sort()          //?????????????
{
	int i,j,temp;
	for (i = 0;i < A-1;i ++)
		for (j = i+1;j < A;j++)
		{
			if (a[j] < a[i]){temp = a[i];a[i] = a[j];a[j] = temp;}
		}
	for (i = 0;i < B-1;i ++)
		for (j = i+1;j < B;j++)
		{
			if (b[j] < b[i]){temp = b[i];b[i] = b[j];b[j] = temp;}
		}
}
void conbine()     //?????????
{
	int i;
	for (i = 0;i < A;i ++)
		cout <<a[i]<<' ';
	for (i = 0;i < B-1;i ++)
		cout <<b[i] <<' ';
	cout <<b[B-1];
}

int main()
{
	read();      //??3???
	sort();
	conbine();
	return 0;
}