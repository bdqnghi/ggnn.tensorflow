int main()  //?????
{
	int a[6][6],line,row,flag=0;
	for (int i=1;i<=5;i++)
	{	
		for (int t=1;t<=5;t++)
			cin >> a[i][t];
	}
	for (int k=1;k<=5;k++)
	{			
		int count=0,max=0;
		for (int p=1;p<=5;p++)
		{
			row = k;
			if (a[k][p]>max)
			{
				max=a[k][p];
				line = p;
			
			}
			
		}

		for (int q=1;q<=5;q++)
		{

			if (a[q][line]>=max)
			{
				count++;
			}
		}
			if (count==5)
			{
				flag++;
				cout << row << " " << line << " " << a[row][line] << endl;
			}
	}
	if (flag==0)
		cout << "not found" << endl;
	return 0;
}
				



