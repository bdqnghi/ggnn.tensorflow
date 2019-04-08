/*
 * 1234.cpp
 *
 *  Created on: 2011-1-9
 *      Author: c130
 */
int main()
{
	int n,i;
	float a[300],max,min,s=0;
	float v,w,e;
	cin >> n;
	for(i=0;i<n;i++)
		cin >> a[i];
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++)
		if(a[i]>max)
			max=a[i];
	for(i=0;i<n;i++)
			if(a[i]<min)
				min=a[i];
	for(i=0;i<n;i++)
			s=s+a[i];
	v=s/n;
	w=v-min;
	e=max-v;
	if(w>e)
		cout << min << endl;
	else
		if(w==e)
			cout << min << "," << max << endl;
			else
				cout << max << endl;
	return 0;
}
