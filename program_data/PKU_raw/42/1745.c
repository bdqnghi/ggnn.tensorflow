//============================================================================
// Name        : 5.1.cpp
// Author      : Zhang Yu
// Version     :
// Copyright   : Your copyright notice
// Description : ????????
//============================================================================



int main() {
	int N;
	cin >>N;
	const int n=N;
	int a[n];
	for (int i=0;i<=n-1;++i)
	{
		cin >>a[i];
	}
	int deletenum;
	cin >>deletenum;
	int ignore=0;

	for (int i=0;i<=n-1-ignore;++i)//when i encounters the number to be ignored, break the loop
	{

		if (a[i]==deletenum)
		{


			for (int j=i;j<=n-2;++j)
			{
				a[j]=a[j+1];
			}
			--i;//when the transformation is done, i-- is used to check whether a[i] is to be deleted
			++ignore;

		}


	}


	for (int i=0;i<=n-1-ignore;++i)
	{
		if (i==0)
			cout <<a[i];
		else
			cout <<" "<<a[i];
	}

	return 0;
}
