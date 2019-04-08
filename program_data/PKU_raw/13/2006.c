/*
 * practice.cpp
 *
 *  Created on: 2014-1-4
 *      Author: 111
 */

int main()
{
	int n;
	cin >> n;
	int str[20001];
	for(int i=0;i<n;i++)
		cin >> str[i];
	int num =0;
	for(int i=1;i<n-num;i++){
		for(int j=0;j<i;j++)
			if(str[j]==str[i]){
				for(int k=i;k<n-1-num;k++)
					str[k] = str[k+1];
				num++;
				//cout << num << endl;
				i--;
				break;
			}
	}
	cout << str[0];
	for(int i=1;i<n-num;i++)
		cout << ' ' << str[i];
	cout << endl;
	return 0;
}
