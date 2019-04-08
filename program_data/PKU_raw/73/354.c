//Liloy Iris 2012.11.3
//????
int main()
{
	int i,j,A[6][6],L[6],H[6],a,b,c=0;
	for (i=0;i<6;i++)
	{
		A[i][0]=0;
		A[0][i]=0;
	}
	for (i=1;i<6;i++)
	{
		for (j=1;j<6;j++)
			cin>>A[i][j];
	}
	for (i=1;i<6;i++)
	{
		a=A[i][1];
		H[i]=1;
		L[i]=1;
		b=A[1][i];
		for (j=1;j<6;j++)
		{	
			if (a<A[i][j])
			{
				a=A[i][j];
		        H[i]=j;
			}
			if (b>A[j][i])
			{
				b=A[j][i];
				L[i]=j;
			}
		}
	}
	for (i=1;i<6;i++)
	{
		if (H[L[i]]==i)
		{
			cout<<L[i]<<" "<<i<<" "<<A[L[i]][i];
			c=1;
		}
	}
	if (c==0)
		cout<<"not found";
	return 0;
}