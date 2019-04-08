//============================================================================
// Name        : ex5.4.cpp
// Author      : Zhang Yu
// Version     :
// Copyright   : Your copyright notice
// Description : ?????
//============================================================================


int main() {
	int n;
	cin >>n;
	double num[n];
	double sum=0;
	for (int i=0;i<=n-1;++i)
	{
		cin >>num[i];
		sum+=num[i];
	}
	double average=sum/n;
	double men[n];
	for (int i=0;i<=n-1;++i)
		men[i]=-1;
	double deltamax=0;
	for (int i=0;i<=n-1;++i)
	{
		if (deltamax<abs(average-num[i]))
			deltamax=abs(average-num[i]);
	}
	int k=0;
	for (int i=0;i<=n-1;++i)
	{
		if (deltamax==abs(average-num[i]))
			men[k++]=num[i];
	}
	sort(men,men+k);
	for (int i=0;i<=k-1;++i)
	{
		if (i==0)
			cout <<men[i];
		else
			cout <<","<<men[i];
	}
	return 0;
}
