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
	float male[100],female[100];
	int m=0,f=0;
	for(int i=1;i<=n;i++)
	{
		char sex[10]; float height;
		cin >> sex >> height;
		if(sex[0]=='m')
		{
			male[m] = height;
			m++;
		}
		else
		{
			female[f] = height;
			f++;
		}
	} //cout << m << endl << f << endl;
	for(int i=0;i<m;i++)
		for(int j=i+1;j<m;j++)
			if(male[i]>male[j])
			{
				float temp = male[i];
				male[i] = male[j];
				male[j] = temp;
			}

	for(int i=0;i<f;i++)
		for(int j=i+1;j<f;j++)
			if(female[i]<female[j])
			{
				float temp = female[i];
				female[i] = female[j];
				female[j] = temp;
			}
	cout << fixed << setprecision(2);
	cout << male[0];
	for(int i=1;i<m;i++)
		cout << ' ' << male[i];
	for(int i=0;i<f;i++)
		cout << ' ' << female[i];
	return 0;
}
