/*
 * T1.cpp
 *
 *  Created on: 2012-11-18
 *      Author: weiwan
 *      Function:????
 */

int guess(int a)       //????
{
	int ans;
	if (a == 1){cout <<"End" <<endl;return 0;} //????????
	if (a % 2 != 0)      //????……
	{
		ans = a * 3 + 1;
		cout <<a <<"*3+1=" <<ans <<endl;
		guess(ans);     //??????
	}
	if (a % 2 == 0)       //????……
	{
		ans = a / 2;
		cout <<a <<"/2=" <<ans <<endl;
		guess(ans);     //??????
	}
	return 0;
}
int main()
{
	int n;
	cin >>n;
	guess(n);
	return 0;
}