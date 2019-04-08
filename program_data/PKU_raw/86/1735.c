//============================================================================
// Name        : ex5.13.cpp
// Author      : Zhang Yu
// Version     :
// Copyright   : Your copyright notice
// Description : ????
//============================================================================


int main() {
	int n;
	cin >>n;
	for (int j=1;j<=n;++j)
	{
		int breaktime;//???????
		cin >>breaktime;
		if (breaktime==0)//???????
			cout <<"60"<<endl;
		else//?????
		{
			int a[breaktime];
			for (int i=0;i<=breaktime-1;++i)
				cin >>a[i];//????????????
			int sum=0;//?????????
			int k=0;//?????????
			for (int i=1;i<=60;++i)//??????
			{
				if (a[k]==i)//??????????
				{
					++sum;
					++k;
					i=i+3;
					for (int p=k;p<=breaktime-1;++p)
						a[p]+=3;
				}
				else//????????
					++sum;
			}
			cout <<sum<<endl;
		}

	}

	return 0;
}
