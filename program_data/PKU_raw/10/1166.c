/*
 * 1.cpp
 *
 *  Created on: 2011-6-8
 *      Author: 09119
 */
int k;
int high[30];
int ff(int pos,int highflag,int count)
{
	if(pos == k)
		return count;
	if(high[pos] <= highflag)
	{
		int tmp1 = ff(pos+1,high[pos],count+1);
		int tmp2 = ff(pos+1,highflag,count);
		if(tmp1 > tmp2 )
			return tmp1;
		else
			return tmp2;
	}
	else
	{
		return ff(pos+1,highflag,count);
	}
}
int main()
{
	int i;
	cin>>k;
	for(i=0;i<k;i++)
	{
		cin>>high[i];
	}
	int result = ff(0,99999,0);
	cout<<result<<endl;
	return 0;
}
