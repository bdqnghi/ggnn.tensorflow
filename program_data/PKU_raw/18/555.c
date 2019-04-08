int main()
{
	int n,i,j,k,len,sum;	//len : the length of matrix
	int m[100][100];
	void cutr0(int m[100][100],int len);
	void cutc0(int m[100][100],int len);
	void del(int m[100][100],int n);//delete row[1] and column[1];return n-1;
	cin >> n;
	for (k=1;k<=n;k++)
	{
		sum=0;
		len=n;
		for (i=0;i<n;i++)
			for (j=0;j<n;j++)
				cin >> m[i][j];


		while (len>1)
		{
			cutr0(m,len);
			cutc0(m,len);
			sum +=m[1][1];
			del(m,len);
			len--;
		}
		cout << sum << endl;
	}

	return 0;
}


void cutr0(int m[100][100],int len)
{
	int min[100];		//min[i] stores the min value of row[i]
	int i,j;

	for (i=0;i<len;i++)
	{
		min[i]=m[i][0];
		for (j=1;j<len;j++)
			if (min[i]>m[i][j])	
				min[i]=m[i][j];
	}

	for (i=0;i<len;i++)
		for (j=0;j<len;j++)
			m[i][j] -= min[i];
}

void cutc0(int m[100][100],int len)
{
	int min[100];		//min[i] stores the min value of column[i]
	int i,j;

	for (i=0;i<len;i++)
	{
		min[i]=m[0][i];
		for (j=1;j<len;j++)
			if (min[i]>m[j][i])	
				min[i]=m[j][i];
	}

	for (i=0;i<len;i++)
		for (j=0;j<len;j++)
			m[i][j] -= min[j];
}

void del(int m[100][100],int len)
{
	int i,j;
	for (i=2;i<len;i++)		//deal with row[0] and column[0]
	{
		m[0][i-1]=m[0][i];
		m[i-1][0]=m[i][0];
	}
	for (i=2;i<len;i++)
		for (j=2;j<len;j++)
			m[i-1][j-1]=m[i][j];
}