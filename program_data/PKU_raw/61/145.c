/*
 * c++practice_026.cpp
 * name:??????
 *  Created on: 2011-11-1
 *      Author: zhujile
 */
int main(){
	int a[21]={1,1},n,i,num[100];
	cin>>n;
	for (int j=2;j<21;j++)
			a[j]=a[j-1]+a[j-2];     //??21????
	for (i=0;i<n;i++)
		cin>>num[i];                //??????????????
	for (i=0;i<n;i++)
		cout<<a[num[i]-1]<<endl;    //?????
	return 0;
}