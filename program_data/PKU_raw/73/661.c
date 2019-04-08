int main()
{
	int a[5][5],i,j,k,g,h,max,flag=0;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			cin>>a[i][j];

	for(i=0;i<5;i++)
	{
		max=a[i][0];
		g=0;
		for(j=1;j<5;j++)
			if(a[i][j]>max)
			{
				max=a[i][j];
				g=j;
			}
		
		
		h=1;
		for(k=0;k<5;k++)
			if(a[k][g]<max)
			{
				h=0;
				break;
			}
		if(h==1)
		{
			cout<<i+1<<' '<<g+1<<' '<<a[i][g];
			flag=1;
		}
	}

	if(flag==0)
		cout<<"not found";
	return 0;
}
		