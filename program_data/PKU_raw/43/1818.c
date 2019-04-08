int main()
{
	int oNum,x1,x2,i=1,sum1=0,sum2=0,j=1,k=1;
	cin >> oNum;
	for (i=1;i<=oNum/2;i=i+2)
	{
		x1=i;
		x2=oNum-x1;
                  for (j=1;j<=x1;j++)
		{
			if (x1%j==0)
			   sum1++;
		}
		for (k=1;k<=x2;k++)
		{
			if (x2%k==0)
			   sum2++;
		}
		if (sum1==2 && sum2==2)
			cout << x1 << " " << x2 << endl;
		sum1=0;
		sum2=0;
		j=1;
		k=1;
	}
	return 0;
}
