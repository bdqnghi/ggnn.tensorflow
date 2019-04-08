int main()
{
	int a[5][5]={0};
	int b[5][5]={0};
	int i=0,j=0,s=0;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			cin>>a[i][j];
	for(i=0;i<5;i++)
	{
		int x=0,y=0,t=0,d=0;
		for(j=0;j<5;j=j+1)
		{
			if(t<=a[i][j])
			{
				t=a[i][j];
		         x=i;
				 y=j;
			}
			else
				x=i;
		}
		//cout<<t<<endl;
		int k=0;
		for(k=0;k<5;k++)
		{
			if(t>a[k][y])
			d=d+1;
		}		
		 if(d==0)
		 {
		 cout<<x+1<<" "<<y+1<<" "<<t<<endl;
		 s=s+1;
		 }
	}
	if(s==0)
		cout<<"not found"<<endl;
	return 0;
}

