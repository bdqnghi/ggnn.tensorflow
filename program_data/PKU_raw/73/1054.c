
int main()
{
	int (*p)[5],a[5][5],max,max_y,flag,result=0;
	p=a;
	
	int i,j,k;

	for (i=0;i<5;i++)
		for (j=0;j<5;j++)
			cin>>*(*(p+i)+j);
	
	for (i=0;i<5;i++)
	{
		max=0;
		flag=0;
		for (j=0;j<5;j++)
		{
			if (*(*(p+i)+j)>max)
			{
				max=*(*(p+i)+j);
				max_y=j;
			}
		}
		for (k=0;k<5;k++)
		{
			if (*(*(p+k)+max_y)<*(*(p+i)+max_y))
				flag=1;
		}
		if (flag==0)
		{	
			cout<<i+1<<' '<<max_y+1<<' '<<*(*(p+i)+max_y)<<endl;
			result++;		
		}
	}
	
	if (result==0)
		cout<<"not found";
	
	return 0;
}
