/*
 * SumMatrixDiag.cpp
 *
 *  Created on: 2013-11-28
 *      Author: 111
 */
int str[101][101];

int main()
{
	int n,sum;
	void oper1(int);
	void oper2(int);
	cin >> n;
	for (int k=0;k<n;k++)
	{
		for (int i=0;i<n;i++)
			for (int j=0;j<n;j++)
				cin >> str[i][j];
		sum = 0;
		for (int i=n;i>1;i--)
		{
			oper1(i);
			sum += str[1][1];
			oper2(i);
		}
		cout << sum << endl;
	}
	return 0;
}

void oper1(int n)
{
	int i,j,min;
    if (n==1) return;
    for (i=0;i<n;i++)
    {
    	min = str[i][0];
        for (j=1;j<n;j++)
        	if (str[i][j]<min)
        		min = str[i][j];
        for (j=0;j<n;j++)
        	str[i][j]-= min;
    }
    for (j=0;j<n;j++)
    {
    	min = str[0][j];
    	for (i=1;i<n;i++)
    		if (str[i][j]<min)
    			min = str[i][j];
    	for (i=0;i<n;i++)
    		str[i][j]-=min;
    }

}
void oper2(int n)
{
	int i,j;
	for (i=1;i<n-1;i++)
	{
		str[0][i] = str[0][i+1];
		str[i][0] = str[i+1][0];
	}
	for (i=1;i<n-1;i++)
		for (j=1;j<n-1;j++)
			str[i][j] = str[i+1][j+1];
}
