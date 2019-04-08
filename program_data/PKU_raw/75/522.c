/*
 * ?????.cpp
 *
 *  Created on: 2010-12-29
 *      Author: wangwei
 */
int x[2000], y[2000];
char temp[2000];
//????????????
int input(int a[])
{
	int i,j=0;
	for(i=0;;i++)
	{
		cin>>a[i];
		temp[i]=cin.get();
		j++;
		if(temp[i]=='\n')
			break;
	}
	return j;
}
int main()
{
	int i,j,k,max,count[2000]={0};
	//????
	j=input(x);
	j=input(y);
	max=0;
	//???????
	for(i=0;i<=1000;i++)
	{
		for(k=0;k<j;k++)
		{
			if(x[k]<=i&&y[k]>i)
				count[i]++;
		}
		//????????????
		if(count[i]>max)
			max=count[i];
	}
	//???????????
	cout<<j<<" "<<max<<endl;
	return 0;
}