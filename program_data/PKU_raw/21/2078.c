//============================================================================
// Name        : 4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


int main() {
	int n;
	cin>>n;
	double a[1000],b[1000];
	for(int i=0;i<n;i++)//????
		cin>>a[i];
	double sum=0;
	for(int i=0;i<n;i++)
		sum+=a[i];
	double average=sum/n;//?????
	for(int i=0;i<n;i++)
		b[i]=fabs(a[i]-average);
	double max1=b[0];//??????
	for(int i=0;i<n;i++)
		max1=max(max1,b[i]);
	double c[1000];
	int num=0;
	for(int i=0;i<n;i++)//?????????
		if(b[i]==max1)
		{
			c[num]=a[i];
			num++;
		}
	sort(c,c+num-1);//?????
	cout<<c[0];//??????
	for(int i=1;i<num;i++)
		cout<<","<<c[i];
	return 0;
}
