//============================================================================
// Name        : ex6.4.cpp
// Author      : Zhang Yu
// Version     :
// Copyright   : Your copyright notice
// Description : ????
//============================================================================


int main() {
	int height;
	int width;
	cin >>height>>width;
	int a[height][width];
	for (int i=0;i<=height-1;++i)
		for (int j=0;j<=width-1;++j)
			cin >>a[i][j];
	int mountain[100][2];//???????????
	int sum=0;
	for (int i=0;i<=height-1;++i)//???????
		for (int j=0;j<=width-1;++j)//???????
		{
			if (i<=height-2)
			{
				if (a[i][j]<a[i+1][j])
					continue;
			}
			if (i>=1)
			{
				if (a[i][j]<a[i-1][j])
					continue;

			}
			if (j>=1)
			{
				if (a[i][j]<a[i][j-1])
					continue;
			}
			if (j<=width-2)
			{
				if (a[i][j]<a[i][j+1])
					continue;
			}
			//??i,j???????,????

				mountain[sum][0]=i;//??????
				mountain[sum][1]=j;//??????
				++sum;//??????

		}
	
	cout <<endl;
	for (int i=0;i<=sum-1;++i)//????
		for (int j=i;j<=sum-1;++j)
		{
			if (mountain[i][0]>mountain[j][0])
			{
				int temp1=mountain[i][0];
				int temp2=mountain[i][1];
				mountain[i][0]=mountain[j][0];
				mountain[i][1]=mountain[j][1];
				mountain[j][0]=temp1;
				mountain[j][1]=temp2;
			}
		}
	for (int i=0;i<=sum-1;++i)
		cout <<mountain[i][0]<<" "<<mountain[i][1]<<endl;

	return 0;
}
