
int main()
{
	int row,col;
	int i,j;
	int matrix[100][100];

	/*????*/
	cin>>row>>col;
	for (i=1;i<=row;i++)
	{
		for (j=1;j<=col;j++)
		{
			cin>>matrix[i][j];
		}
	}

	/*?????*/
	int k;
	cout<<matrix[1][1];
	for (k=2;k<=col;k++)
	{
		cout<<endl<<matrix[1][k];
	}

	/*??????*/
	int xlength=col-1;
	int ylength=row-1;
	int t;
	char flag='d';
	i=1;j=col;
	while (  ( (flag=='u'||flag=='d')&&(ylength!=0) )
		    ||
			 ( (flag=='l'||flag=='r')&&(xlength!=0) )  )
	{

		switch (flag)
		{
		case 'd':
			for (t=1;t<=ylength;t++)
			{
				i++;
				cout<<endl<<matrix[i][j];
			}
			flag='l';
			ylength--;
			break;
		case 'l':
			for (t=1;t<=xlength;t++)
			{
				j--;
				cout<<endl<<matrix[i][j];
			}
			flag='u';
			xlength--;
			break;
		case 'u':
			for (t=1;t<=ylength;t++)
			{
				i--;
				cout<<endl<<matrix[i][j];
			}
			flag='r';
			ylength--;
			break;
		case 'r':
			for (t=1;t<=xlength;t++)
			{
				j++;
				cout<<endl<<matrix[i][j];
			}
			flag='d';
			xlength--;
			break;
		}
	}
	return 0;
}