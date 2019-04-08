void swi (int num[5][5],int a,int b)
{
	int f;
	int k,i,j;
    if(a>4||b>4)
	    cout<<"error";
	else 
	{
		for(k=0;k<5;k++)
		{
			f=num[a][k];
			num[a][k]=num[b][k];
			num[b][k]=f;
		}
		for(i=0;i<5;i++)
		{
			cout<<num[i][0];
			for(j=1;j<5;j++)
				cout<<" "<<num[i][j];
			if(j==5)
				cout<<endl;
		}
	}


}
int main ()
{
	int NU[5][5];
	int m,n;
	int i,j,c;
	void swi(int num[5][5],int a,int b);

	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			cin>>NU[i][j];
		}
	}
	cin>>m>>n;

	swi(NU,m,n);
  
	return 0;
}