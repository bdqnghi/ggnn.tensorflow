int main()
{
	int a[6][6]={0};
	int i=0,j=0,temp,max=0,min=0,got=0;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			cin>>a[i][j];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i][j]>=a[i][0]&&a[i][j]>=a[i][1]&&a[i][j]>=a[i][2]&&a[i][j]>=a[i][3]&&a[i][j]>=a[i][4])
				temp=j;
		}
		if(a[i][temp]<=a[0][temp]&&a[i][temp]<=a[1][temp]&&a[i][temp]<=a[2][temp]&&a[i][temp]<=a[3][temp]&&a[i][temp]<=a[4][temp])
		{
			got=1;
			min=i;
			max=temp;
		}
	}
	if(got==1)
		cout<<min+1<<" "<<max+1<<" "<<a[min][max];
	else
		cout<<"not found";
	return 0;
}