int main()
{
	int a[5][5],i,j;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			cin>>a[i][j];
	int count=0,temp;
	for(i=0;i<5;i++)
	{
		int max=a[i][0],maxj=0;
		for(j=0;j<5;j++)
		{
			if(a[i][j]>max) 
				{max=a[i][j];
			maxj=j;}
		}
		int g=1;
		for(j=0;j<5;j++)
		{  
			if(a[j][maxj]<max)
			{ 
				g=0;
				break;
			}}
		if(g==1)
		{
			count++;
			cout<<i+1<<" "<<maxj+1<<" "<<max;                  //??????????
			break;
		}
	}
	if(count==0) cout<<"not found"<<endl;
	return 0;
}