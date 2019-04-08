
int swi (int num[5][5],int a,int b)
{
	int f;
	int k;
    if(a>4||b>4)
		return 0;
	else 
	{
		for(k=0;k<5;k++)
		{
			f=num[a][k];
			num[a][k]=num[b][k];
			num[b][k]=f;
		}
		return 1;
	}


}
int main ()
{
	int NU[5][5];
	int m,n;
	int i,j,c;
	int swi(int num[5][5],int a,int b);

	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			cin>>NU[i][j];
		}
	}
	cin>>m>>n;

	c=swi(NU,m,n);
     
    if(c==0)
		cout<<"error";
	if(c==1)
	{
		for(i=0;i<5;i++)
		{
			cout<<NU[i][0];
			for(j=1;j<5;j++)
			{
				cout<<" "<<NU[i][j];
			}
			if(j==5)
				cout<<endl;
		}
	}

	return 0;
}
