/**
* @file homework.cpp
* @author ??
* @date 2010?11?26
* @description
* ??????:1049 ???? 
*/
int main()
{
	int n, i, j, m, sum=0 ;
	cin >> n;
	int a[100];
	for (i=0;i<n;i++)
	{
		cin >> m;
		sum = 0;
		if (m==0)
			cout << "60" << endl;
		else
		{
		for (j=0;j<m;j++)
		{
			cin >> a[j];
		}
		for (j=0;j<m;j++)
		{
			if (a[j] < 59)
				sum += 3;
			if (a[j]+sum > 63)
			{
				sum -= 3;
				cout << 60 - sum << endl;
				break;
			}
			else 
			{
				if (a[j]+sum > 60)
				{
					
				cout << a[j] << endl;
				break;
				}
				if (j==m-1)
				 cout << 60 - sum <<endl;
			}
		}
		}		
	}
	return 0;

}