int main()
{
	int a[5][5], k=0, i=0, j=0, M[5]={0}, m[5]={0},t[5]={0};
	for(i=0; i<5; i++)
		for(j=0; j<5; j++)
			cin>>a[i][j];
	for(i=0; i<5; i++)
	{
		M[i]=a[i][0];
		for(j=0; j<5; j++)
		{	
			if(M[i]<=a[i][j])
			{
				M[i]=a[i][j];
				t[i]=j;	
			}
		}	
	}
	for(j=0; j<5; j++)
	{
		m[j]=a[0][j];
		for(i=0; i<5; i++)
		{			
			if(m[j]>=a[i][j])
			{
				m[j]=a[i][j];				

			}
		}	
	}
	for(i=0; i<5; i++)
		{
			if(m[t[i]]==M[i])
			{
				cout<<i+1<<' '<<t[i]+1<<' '<<M[i]<<endl;
			}
			else
				k++;
		}
			if(k==5)
				cout<<"not found"<<endl;
		return 0;
}