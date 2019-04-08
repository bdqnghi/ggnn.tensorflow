//****************************************
//*???cell birth                            **
//*????? 1100013004                     **
//*???2010.11.28                          **
//****************************************

int a[9][9];

void birth(int i,int j,int m,int n)
{
	if (n==0)
	{
		a[i][j]+=m;
		return;
	}
	else
	{
		int k,l;
		for (k = i - 1;k < i + 2;k++)
			for(l = j - 1;l < j + 2;l++)
				if (k>=0 && k<9 && l>=0 && l<9) //????????
				{
					if (k==i && l==j)
						birth(k,l,2*m,n-1);
					else
						birth(k,l,m,n-1);
				}

	}
}

int main()
{
	int m,n,i,j;
	cin>>m>>n;
	
	for (i = 0;i < 9; i++)
		for(j = 0;j < 9; j++)
			a[i][j]=0;
	birth(4,4,m,n);
	for (i = 0;i < 9; i++)
		for(j = 0;j < 9; j++)
		{
			if(j == 8)
				cout<<a[i][j]<<endl;
			else
				cout<<a[i][j]<<' ';
		}
	return 0;
}