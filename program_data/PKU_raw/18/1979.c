

int n,i,j,min;

void XJ (int a[][100],int n)
{
	int b[100][100]={0};
	b[0][0]=a[0][0];
	for (i=1;i<n-1;i++)
	{
		b[0][i]=a[0][i+1];
		b[i][0]=a[i+1][0];
	}
	for (i=1;i<n-1;i++)
	{
		for (j=1;j<n-1;j++)
		{
			b[i][j]=a[i+1][j+1];
		}
	}
	for (i=0;i<n-1;i++)
	{
		for (j=0;j<n-1;j++)
		{
			a[i][j]=b[i][j];
		}
	}
}

int MIN (int a[][100],int n,int sum)
{
	if (n==1)
		 return sum;
	else 
	{
		for (i=0;i<n;i++)
		{
			int min=a[i][0];
			for (j=0;j<n;j++)
			{
				if (a[i][j]<min)
					min =a[i][j];
			}
			for (j=0;j<n;j++)
				a[i][j]-=min;
		}
		for (i=0;i<n;i++)
		{
			int min=a[0][i];
			for (j=0;j<n;j++)
			{
				if (a[j][i]<min)
					min=a[j][i];
			}
			for (j=0;j<n;j++)
				a[j][i]-=min;
		}
		sum+=a[1][1];
		XJ (a,n);
	    return MIN (a,n-1,sum);
	}
//	return sum;
}

int main ()
{
	int a[100][100]={0},k;
	cin >>n;
	int ii;
	int jj;
	for (ii=0;ii<n;ii++)
	{
		//sum=0;
		for (jj=0;jj<n;jj++)
		{
			for (k=0;k<n;k++)
			{
				cin >>a[jj][k];
			}
		}
		cout <<MIN(a,n,0)<<endl;
	}
	return 0;
}


