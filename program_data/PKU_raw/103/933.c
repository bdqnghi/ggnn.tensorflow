/*
 * ??(12-5) ??????
 *
 *  Created on: 2013-1-12
 *      Author: zhuyongfu
 */


int main(){
	char s1[1001],s2[1001];
	int l,i,num = 1;
	cin >> s1;
	l = strlen(s1);
	for(i = 0;i < l;i++)
	{
		if(s1[i] > 90)
			s2[i] = s1[i] - 32;
		else
			s2[i] = s1[i];
	}
	if(l == 1)
	{
		cout << '(' << s2[0] << ',' << num << ')';
		return 0;
	}
	for(i = 1;i < l;i++)
	{
		if(s2[i] != s2[i - 1]&&i != l - 1)
		{
			cout << '(' << s2[i - 1] << ',' << num << ')';
			num = 1;
		}
		if(s2[i] != s2[i - 1]&&i == l - 1)
		{
			cout << '(' << s2[i - 1] << ',' << num << ')';
			num = 1;
			cout << '(' << s2[i] << ',' << num << ')';
		}
		if(s2[i] == s2[i - 1]&&i != l - 1)
			num++;
		if(s2[i] == s2[i - 1]&&i == l - 1)
		{
			num++;
			cout << '(' << s2[i - 1] << ',' << num << ')';
		}
	}
	return 0;
}
